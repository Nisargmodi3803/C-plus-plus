#include<iostream>

using namespace std;

template<class T1,class T2>
class ABC
{
    T1 a;
    T2 b;

    public:
        ABC(T1 x,T2 y)
        {
            a = x;
            b = y;
        }

        void display()
        {
            cout<<"Value of A is "<<a<<endl;
            cout<<"Value of B is "<<b<<endl;
        }
};

int main()
{
    ABC <int,char> obj1(58,'N');

    obj1.display();

    return 0;
}