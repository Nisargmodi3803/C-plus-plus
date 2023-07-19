#include<iostream>

using namespace std;

class complex
{
    int img,real;

    public:
        complex()
        {
            real = 0;
            img = 0;
        }

        complex(int a,int b)
        {
            real = a;
            img = b;
        }

        void display()
        {
            cout<<real<<" + "<<img<<"i"<<endl;
        }

        complex operator+(complex c)
        {
            complex temp;
            temp.real = real + c.real;
            temp.img = img + c.img;

            return temp;
        }
};

int main()
{
    complex c1(10,15);
    complex c2(15,10);
    complex c3 = c1 + c2;

    c3.display();

    return 0;
}