#include<iostream>

using namespace std;

inline int mul(int ,int );

int main()
{
    int a,b;

    cout<<"Enter value of a and b"<<endl;
    cin>>a>>b;

    cout<<"Multiplication of a and b is "<<mul(a,b)<<endl;
    cout<<"Multiplication of a and b is "<<mul(a,b)<<endl;
    cout<<"Multiplication of a and b is "<<mul(a,b)<<endl;
    cout<<"Multiplication of a and b is "<<mul(a,b)<<endl;
    cout<<"Multiplication of a and b is "<<mul(a,b)<<endl;
    cout<<"Multiplication of a and b is "<<mul(a,b)<<endl;

    return 0;
}

inline int mul(int a,int b)
{
    //static int c = 0;  // Better not to use while inline function....
    //c+=1;
    return a*b+c;
}