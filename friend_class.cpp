#include<iostream>

using namespace std;

class complex;

class calucate
{
    public:
        int realSum(complex,complex);
        int imgSum(complex,complex);

};


class complex
{
    int img;
    int real;

    public:
        void setdata();
        void display();
        
        // one way of using friend function of different class....
        // friend int calucate :: realSum(complex,complex);
        // friend int calucate :: imgSum(complex,complex);

        // Now, Friend the whole class...
        friend calucate; 
};

int main()
{
    complex c1,c2;
    calucate cal;

    cout<<"For Complex C1"<<endl;
    c1.setdata();

    cout<<"For Complex C2"<<endl;
    c2.setdata();


    cout<<"Complex C1 "<<endl;
    c1.display();
    cout<<endl;

    cout<<"Complex C2 "<<endl;
    c2.display();

    cout<<endl;
    cout<<endl;

    cout<<"Sum of Real Part of Complex C1 and C2 is "<<cal.realSum(c1,c2)<<endl;
    cout<<"Sum of img Part of Complex C1 and C2 is "<<cal.imgSum(c1,c2)<<endl;

    return 0;
}

void complex :: setdata()
{
    cout<<"Enter Real Part : ";
    cin>>real;

    cout<<"Enter Imaginary Part : ";
    cin>>img;

    cout<<endl;
}

void complex :: display()
{
    cout<<real<<" + "<<img<<"i";
}

int calucate :: realSum(complex c1,complex c2)
{
    return (c1.real + c2.real);
}

int calucate :: imgSum(complex c1,complex c2)
{
    return (c1.img + c2.img);
}