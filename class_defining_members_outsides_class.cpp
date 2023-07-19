#include<iostream>

using namespace std;

class items
{
    int a,b,c;

    public:
        int d,e;
        void getdata(int x,int y,int z);
        void putdata()
        {
            cout<<"The value of a is "<<a<<endl;
            cout<<"The value of b is "<<b<<endl;
            cout<<"The value of c is "<<c<<endl;
            cout<<"The value of d is "<<d<<endl;
            cout<<"The value of e is "<<e<<endl;
        }
};

void items :: getdata(int x,int y,int z)
{
    x=a;
    y=b;
    z=c;
}

int main()
{
    items values;

    values.getdata(2,3,4);
    values.d=5;
    values.e=6;
    values.putdata();

    return 0;
}