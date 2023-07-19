#include<iostream>

using namespace std;

/*
                            private Visibility Mode         protected Visibility Mode       public Visibility Mode
    private   members         Not Inherited                    Not Inherited                   Not Inherited
    protected members         Private                          Protected                       Protected
    public    members         Private                          Protected                       Public


*/

class Base
{
    protected:
        int a;
    private:
        int b;
    public:
        void putdata();
        void display();
};

class Derived : protected Base
{
    public:
        void call();
};

int main()
{
    Derived d;
    d.call();

    return 0;
}

void Derived :: call()
{
    putdata();
    display();
}

void Base :: putdata()
{
    a = 3;
    b = 112;
}

void Base :: display()
{
    cout<<"Value of a is "<<a<<endl;
    cout<<"value of b is "<<b<<endl;
}