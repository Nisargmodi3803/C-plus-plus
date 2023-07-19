#include<iostream>

using namespace std;

void divide(int n,int d)
{
    float div;

    try
    {
        if(d==0)
        {
            throw d;
        }

        else
        {
            div = (float) n/d;
        }
    }

    catch(int)
    {
        cout<<"In Divide function divide by zero Execption found "<<endl;
        throw;
    }
}

int main()
{
    int n,d;

    cout<<"Enter N : ";
    cin>>n;

    cout<<"Enter D : ";
    cin>>d;
    try
    {
        divide(n,d);        
    }
    

    catch(int)
    {
        cout<<"In Main Divide by zero Execption found"<<endl;
    }

    cout<<"End"<<endl;

    return 0;
}