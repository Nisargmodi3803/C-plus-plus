#include<iostream>

using namespace std;

class Base1
{
    protected:
        int a;

    public:
        void get_a(int);
};

void Base1 :: get_a(int x)
{
    a = x;
}

class Base2
{
    protected:
        int b;

    public:
        void get_b(int);
};

void Base2 :: get_b(int y)
{
    b = y;
}

class Base3
{
    protected:
        int c;

    public:
        void get_c(int);
};

void Base3 :: get_c(int z)
{
    c = z;
}


class Derived : public Base1,public Base2,public Base3
{
    public:
        void display();
};

void Derived :: display()
{
    cout<<"In Base 1 value of a is "<<a<<endl;
    cout<<"In Base 2 value of b is "<<b<<endl;
    cout<<"In Base 3 value of c is "<<c<<endl;
    cout<<"Sum of a,b and c is "<<a+b+c<<endl;
}

int main()
{
    Derived d;
    d.get_a(58);
    d.get_b(112);
    d.get_c(0);
    d.display();

    return 0;
}