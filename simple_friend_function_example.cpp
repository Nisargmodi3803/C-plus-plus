#include<iostream>

using namespace std;

class Y;

class X
{
    int value;

    public:
        void setdata();
        
    friend void add(X,Y);
};

class Y
{
    int value;

    public:
        void setdata();

    friend void add(X,Y);
};

int main()
{
    X a;
    Y b;

    a.setdata();
    cout<<endl;
    b.setdata();

    add(a,b);

    return 0;
}

void X :: setdata()
{
    cout<<"Enter the Value : ";
    cin>>value;
}

void Y :: setdata()
{
    cout<<"Enter the Value : ";
    cin>>value;
}

void add(X a,Y b)
{
    cout<<endl;
    cout<<"Addition of a of Class X and b of Class of Y is "<<(a.value + b.value)<<endl;
}