#include<iostream>

using namespace std;

class complex
{
    float img;
    float real;

    public:
        complex(float a,float b)
        {
            real = a;
            img = b;
        }

        complex(float a)
        {
            real = a;
            img = 2.1;
        }

        complex()
        {
            real = 0;
            img = 0;
        }

        void display()
        {
            cout<<real<<" + "<<img<<"i"<<endl;

        }

        friend complex sum(complex c1,complex c2)
        {
            complex c4;

            c4.real = c1.real + c2.real;
            c4.img = c1.img + c2.img;

            return c4;
        }
};

int main()
{
    complex c1(2.4,5.1);
    complex c2(5.1);
    complex c3;

    cout<<"C1 : ";
    c1.display();

    cout<<"C2 : ";
    c2.display();

    cout<<"C3 : ";
    c3.display();

    complex c4 = sum(c1,c2);

    cout<<"C1 + C2 : ";
    c4.display();

    return 0;
}