#include<iostream>

using namespace std;

int main()
{
    int *p = new int;
    float *q = new float(25.5);

    cout<<"Value of p is "<<*p<<endl;
    cout<<"Value of p is "<<*q<<endl;

    int size = 10;
    int *arr = new int[size];

    cout<<"Size of arr is "<<sizeof(arr)<<endl;

    if(!p)
        cout<<"<Memory not allocated"<<endl;

    return 0;
}