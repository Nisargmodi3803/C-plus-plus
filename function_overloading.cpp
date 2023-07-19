#include<iostream>

using namespace std;

void add(int a,int b);
void add(int a,int b,int c);
void add(double a,double b);
void add(int a,double b);
void add(float a,float b);
void add(int a,double b,float c);

int main()
{
    add(2,3);
    add(2,3,4);
    add(2.5,3.5);
    add(4,2.5);
    add(2,2.5,3.5);
    add(2.1,1.1);

    return 0;
}

void add(int a,int b)
{
    cout<<"A = "<<a+b<<endl;
}

void add(int a,int b,int c)
{
    cout<<"B = "<<a+b+c<<endl;
}

void add(double a,double b)
{
    cout<<"C = "<<a+b<<endl;
}

void add(int a,double b)
{
    cout<<"D = "<<a+b<<endl;
}

void add(float a,float b)
{
    cout<<"E = "<<a+b<<endl;
}

void add(int a,double b,float c)
{
    cout<<"F = "<<a+b+c<<endl;
}