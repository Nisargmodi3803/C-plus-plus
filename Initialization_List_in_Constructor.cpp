#include<iostream>

using namespace std;

class Alpha
{
    int c,d;

    public:
        Alpha(int i,int j)
        {
            c = i;
            d = j;

            cout<<"Value of c is "<<c<<endl<<"Value of d is "<<d<<endl;
        }
};

class Gamma
{
    int a,b;

    public:
        Gamma(int i,int j) : a(i),b(j)
        {
            cout<<"Value of a is "<<a<<endl<<"Value of b is "<<b<<endl;
        }
        
};

class Beta
{
    int e,f;

    public:
        Beta(int i,int j) : e(i),f(j+i)
        {
            cout<<"Value of e is "<<e<<endl<<"Value of f is "<<f<<endl;
        }
        
};

class ray
{
    int g,h;

    public:
        Beta(int i,int j) : g(i),h(j+g)
        {
            cout<<"Value of g is "<<g<<endl<<"Value of h is "<<h<<endl;
        }
        
};

int main()
{
    Gamma i(10,20);
    Alpha j(30,40);
    Beta k(50,60);
    ray x(70,80);

    return 0;
}