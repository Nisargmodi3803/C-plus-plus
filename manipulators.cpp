#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
    int a,b,c;

    cout<<"Enter Values of a,b,c"<<endl;
    cin>>a>>b>>c;

    cout<<"Value of a without setw is "<<a<<endl;
    cout<<"Value of b without setw is "<<b<<endl;
    cout<<"Value of c without setw is "<<c<<endl;

    cout<<"Value of a with setw is "<<setw(5)<<a<<endl; 
    cout<<"Value of b with setw is "<<setw(5)<<b<<endl; 
    cout<<"Value of d with setw is "<<setw(5)<<c<<endl; 
    
    return 0;
}