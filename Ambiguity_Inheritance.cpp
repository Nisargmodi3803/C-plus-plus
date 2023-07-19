#include<iostream>

using namespace std;

class Base1
{
    public:
        void greek()
        {
            cout<<"Good Morning"<<endl;
        }
};

class Base2
{
    public:
        void greek()
        {
            cout<<"Good Afternoon"<<endl;
        }
};

class Base3
{
    public:
        void greek()
        {
            cout<<"Good Night"<<endl;
        }
};

class Derived : public Base1, public Base2, public Base3
{
    public:
        void greek()
        {
            // Base1 :: greek();
            Base2 :: greek();
            // Base3 :: greek();
        }
};

int main()
{
    Derived d;

    d.greek();

    return 0;
}