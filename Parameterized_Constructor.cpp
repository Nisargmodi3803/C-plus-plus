#include<iostream>

using namespace std;

class complex
{
    int img;
    int real;

        public:
            complex(int ,int );
            void display();
};

int main()
{
    // complex c(4,5);

    int x,y;

    cout<<"Enter Real Part : ";
    cin>>x;

    cout<<"Enter Img part : ";
    cin>>y;

    complex c(x,y);

    c.display();

    return 0;
}

complex :: complex(int x,int y)
{
    real = x;
    img = y;
}

void complex :: display()
{
    cout<<real<<" + "<<img<<"i"<<endl;
}