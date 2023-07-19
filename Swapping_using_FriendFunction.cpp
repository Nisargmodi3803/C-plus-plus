#include<iostream>

using namespace std;

class C2;

class C1
{
    int a;

    public:
        void getdata();
        void display();

    friend void swap(C1&,C2&);
};

class C2
{
    int b;

    public:
        void getdata();
        void display();
    
    friend void swap(C1&,C2&);
};

int main()
{
    C1 O1;
    C2 O2;

    O1.getdata();

    O2.getdata();
    cout<<endl;

    cout<<"Before Swapping Function\nThe Value of a of Class C1 is ";
    O1.display();
    cout<<"The Value of b of Class C2 is ";
    O2.display();
    cout<<endl;

    swap(O1,O2);

    cout<<"After Swapping Function\nThe Value of a of Class C1 is ";
    O1.display();
    cout<<"The Value of b of Class C2 is ";
    O2.display();
    
    return 0;
}

void C1 :: getdata()
{
    cout<<"Enter the Value of a of Class C1 : ";
    cin>>a;
}

void C2 :: getdata()
{
    cout<<"Enter the Value of b of Class C2 : ";
    cin>>b;
}

void C1 :: display()
{
    cout<<a<<endl;
}

void C2 :: display()
{
    cout<<b<<endl;
}

void swap(C1 &O1,C2 &O2)
{
    int temp = O1.a;
    O1.a = O2.b;
    O2.b = temp;
}