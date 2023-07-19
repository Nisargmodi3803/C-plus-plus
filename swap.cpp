#include<iostream>

using namespace std;

void swap(int *,int *);

int main()
{
    int a,b;

    cout<<"Enter the Two Numbers"<<endl;
    cin>>a>>b;

    swap(&a,&b);

    cout<<"After Swapping\n"<<"Value of a is "<<a<<"\nValue of b is "<<b<<endl;
    
    return 0;
}

void swap(int *a,int *b)
{
    int temp;

    temp=*a;
    *a=*b;
    *b=temp;
}