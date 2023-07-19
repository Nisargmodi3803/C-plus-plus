#include<iostream>

using namespace std;

class complex
{
    int img,real;

    public:
        complex();   //Constructor prototype  [Constructor Declaration] 
        void display();
};

int main()
{
    complex c1,c2,c3;

    // c1.display();
    // c2.display();
    // c3.display();

    return 0;
}

complex :: complex()  //Default Constructor....
{
    // real = 1;  
    // img = 1;

    cout<<"Enter Real Part of Complex Number : ";
    cin>>real;

    cout<<"Enter Imaginary Part of Complex Number : ";
    cin>>img;

    cout<<"Complex Number : "<<real<<" + "<<img<<"i"<<endl<<endl;

}

/*
void complex :: display()
{
    cout<<"Complex Number : "<<real<<" + "<<img<<"i"<<endl;
}
*/