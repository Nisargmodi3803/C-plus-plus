#include<iostream>

using namespace std;

class items
{
    int a,b,c;

    public:
        int d,e;
        void getdata(int ,int ,int);
        void putdata()
        {
            cout<<"Value of a is "<<a<<endl;
            cout<<"Value of b is "<<b<<endl;
            cout<<"Value of c is "<<c<<endl;
            cout<<"Value of d is "<<d<<endl;
            cout<<"Value of e is "<<e<<endl;
        }
};

int main()
{
    items thing;
    thing.d=4;
    thing.e=5;
    // thing.a=1;  //This will not work because a is private data and we can not access by this....
    thing.getdata(1,2,3);
    thing.putdata();

    return 0;
}

void items :: getdata(int x,int y,int z)
{
    a=x;
    b=y;
    c=z;
}