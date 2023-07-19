#include<iostream>

using namespace std;

class Base
{
    int data1;
    public:
        int data2;
        void setdata();
        int getdata1();
        int getdata2();
};

class Derived : public Base
{
    int data3;
    public:
        void process();
        void display();
};

int main()
{
    Derived d;
    d.setdata();
    d.process();
    d.display();

    return 0;
}

void Base :: setdata()
{
    cout<<"Enter the value of Data 1 : ";
    cin>>data1;

    cout<<"Enter the Value of Data 2 : ";
    cin>>data2;
    cout<<endl;
}

int Base :: getdata1()
{
    return data1;
}

int Base :: getdata2()
{
    return data2;
}

void Derived :: process()
{
    data3 = data2 * getdata1();
}

void Derived :: display()
{
    cout<<"Value of Data 1 is "<<getdata1()<<endl;

    cout<<"Value of Data 2 is "<<data2<<endl;

    cout<<"Value of Data 3 is "<<data3<<endl;
}