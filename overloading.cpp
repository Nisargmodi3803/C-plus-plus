#include<iostream>

using namespace std;

//void abc(int );
//void abc(float );
//void abc(char );
void abc(double );

int main()
{
/*
    int a;
    cout<<"Enter int a : ";
    cin>>a;

    float b;
    cout<<"Enter float b : ";
    cin>>b;

    char c;
    cout<<"Enter char c : ";
    cin>>c;

    double d;
    cout<<"Enter double d : ";
    cin>>d;

    abc(a);
    abc(b);
    abc(c);
    abc(d);
*/

    abc(97);
    //abc('A');
    //abc(55.5);
    //abc(55.5f);

    return 0;
}

void abc(int a)
{
    cout<<"a = "<<a<<endl;
}

void abc(float b)
{
    cout<<"b = "<<b<<endl;
}

void abc(char c)
{
    cout<<"c = "<<c<<endl;
}

void abc(double d)
{
    cout<<"d = "<<d<<endl;
}