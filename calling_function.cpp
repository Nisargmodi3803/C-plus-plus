#include<iostream>

using namespace std;

void swap(int ,int );

void swap_by_reference(int*,int*);

void swap_by_reference_variable(int &,int &);

int main()
{
    int x=5,y=6;

    //cout<<"Before Swap function\n"<<"Value of x is "<<x<<"\nValue of y is "<<y<<endl;
    //swap(x,y);
    //cout<<"After Swap function\n"<<"Value of x is "<<x<<"\nValue of y is "<<y<<endl;

    //cout<<"\nBefore Swap function\n"<<"Value of x is "<<x<<"\nValue of y is "<<y<<endl;
    //swap_by_reference(&x,&y);
    //cout<<"After Swap function\n"<<"Value of x is "<<x<<"\nValue of y is "<<y<<endl;

    cout<<"\nBefore Swap function\n"<<"Value of x is "<<x<<"\nValue of y is "<<y<<endl;
    swap_by_reference_variable(x,y);
    cout<<"After Swap function\n"<<"Value of x is "<<x<<"\nValue of y is "<<y<<endl;

    return 0;
}

void swap(int a,int b)//this will not work...
{
    int temp = a;
    a=b;
    b=temp;
}

void swap_by_reference(int *a,int *b)//This will work....
{
    int temp=*a;
    *a=*b;
    *b=temp;
}

void swap_by_reference_variable(int &a,int &b)//This will work....
{
    int temp=a;
    a=b;
    b=temp;
}