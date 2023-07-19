#include<iostream>

using namespace std;
int m=200;
int main()
{
    int m=100;

    cout<<"Value of m is "<<m<<endl;
    cout<<"Value of m gobally is "<<::m<<endl;
    
    return 0;
}