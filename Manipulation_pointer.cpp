#include<iostream>

using namespace std;

int main()
{
    int a = 10;
    int *ptr = &a;

    cout<<"Value of a is "<<(*ptr)<<endl;

    *ptr+=a;
    
    cout<<"Now value of a is "<<(*ptr)<<endl;

    *ptr+=(a*a);

    cout<<"Now value of a is "<<(*ptr)<<endl;

    return 0;
}