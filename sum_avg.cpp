#include<iostream>

using namespace std;

int main()
{
    int a,b,c,sum;
    float avg;

    cout<<"Enter Three Numbers"<<endl;
    cin>>a>>b>>c;

    sum = a+b+c;

    cout<<"\nSum of Three Numbers is "<<sum;

    avg = (float)(sum)/3;

    cout<<"\n\nAverage of Three Number is "<<avg;

    return 0;
}