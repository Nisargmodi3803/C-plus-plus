#include<iostream>

using namespace std;

float principal_amount(float principal,float period,float rate = 4.5);

int main()
{
    float principal,period;

    cout<<"Enter Principal Amount : ";
    cin>>principal;

    cout<<"Enter Period : ";
    cin>>period;

    cout<<"Principle amount is "<< principal_amount(principal,period)<<endl;

    return 0;
}

float principal_amount(float principal,float period,float rate) 
{
    principal+=(principal*period*rate)/100;

    return principal;
}

// Another Logic..
// rate = principal;
// for(int i = 0;i<n;i++)
// {
//     rate = rate * (1+r);
// }