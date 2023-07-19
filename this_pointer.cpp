#include<iostream>

using namespace std;

class A
{
    int a;

    public:
        void getdata(int a)
        {
            this->a = a;
        }

        void display()
        {
            cout<<"The Value of a is "<<a<<endl;
        }
};

int main()
{
    A a;

    a.getdata(10);
    a.display();

    return 0;
}