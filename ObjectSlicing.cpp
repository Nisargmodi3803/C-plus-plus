#include<iostream>

using namespace std;

class Base
{
    protected:
        int i;

    public:
        Base(int a)
        {
            i = a;
        }

        virtual void display()
        {
            cout<<"We in Base's Display function and value of i is "<<i<<endl;
        }
};

class Derived : public Base
{
    protected:
        int j;

    public:
        Derived(int a,int b) : Base(a)
        {
            j = b;
        }

        virtual void display()
        {
            cout<<"We in Dervied's Display function and value of i is "<<i<<" & j is "<<j<<endl;
        }
};

void show(Base &obj)    //This will call both base and derived class...
{
    obj.display();
}

// void show(Base obj)      //This will only call base class....
// {
//     obj.display();
// }

int main()
{
    Base b(58);
    Derived d(48,112);

    show(b);
    show(d);

    return 0;
}