#include<iostream>

using namespace std;

class Base1
{
    int i;

    public:
        Base1(int );
        void Display_Base1();
};

Base1 :: Base1(int a)
{
    i = a;
    cout<<"Base1 Constructor is Called..."<<endl;
}

void Base1 :: Display_Base1()
{
    cout<<"The Value of i is "<<i<<endl;
}


class Base2
{
    int j;

    public:
        Base2(int );
        void Display_Base2();
};

Base2 :: Base2(int b)
{
    j = b;
    cout<<"Base2 Constructor is Called..."<<endl;
}

void Base2 :: Display_Base2()
{
    cout<<"The Value of j is "<<j<<endl;
}


class Derived : public Base1,public Base2
{
    int d1,d2;

    public:
        Derived(int a,int b,int c,int d) : Base1(a),Base2(b)
        {
            d1 = c;
            d2 = d;
            cout<<"Derived Constructor is Called..."<<endl;
        }
        void Display_Derived()
        {
            cout<<"The Value of D1 is "<<d1<<endl;
            cout<<"The Value of D2 is "<<d2<<endl;
        }
};

int main()
{
    Derived x(10,20,30,40);

    x.Display_Base1();
    x.Display_Base2();
    x.Display_Derived();

    return 0;
}