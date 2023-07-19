#include<iostream>

using namespace std;

int area(int );

int main()
{   
    int r;

    cout<<"Enter radius of cicle : ";
    cin>>r;

    int A = area(r);

    cout<<"Area = "<<A<<endl;
    cout<<"Area = "<<area(r)<<endl;
    
    return 0;
}

int  area(int r)
{
    int pi=3.14;

    return(pi*pi*r);

    //cout<<"Area of circle is "<<A<<endl;

}