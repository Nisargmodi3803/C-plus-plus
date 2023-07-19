#include<iostream>

using namespace std;

class number
{
    int a,b;

    public:
        number(int x,int y=5)
        {
            a=x;
            b=y;

            cout<<"Number a is "<<a<<" and Number b is "<<b<<endl;
        }
};

int main()
{
    number n(2);

    return 0;
}