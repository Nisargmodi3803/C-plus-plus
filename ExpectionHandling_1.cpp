/*

#include<iostream>

using namespace std;

int main()
{
    int a,b;

    cout<<"Enter the Value of a and b : ";
    cin>>a>>b;

    int x = a-b;
    try
    {
        if(x!=0)
        {
            cout<<"Result of a/x : "<<a/x<<endl;
        }
        else
        {
            throw(x);
        }
    }

    catch(int i)
    {
        cout<<"Expection is caught : divide by 0"<<endl;
    }

    return 0;
}


*/

#include<iostream>

using namespace std;

int main()
{
    int num,deno;
    float Result;

    cout<<"Enter the Numerator : ";
    cin>>num;

    cout<<"Enter the Denominator : ";
    cin>>deno;

    try
    {
        if(deno == 0)
        {
            throw deno;
        }

        Result = (float)num/deno;
    }
    
    catch(int ex)
    {
        cout<<"\nExecption : Division by 0 is Infinite";
    }

    if(deno!=0)
        cout<<"Division is "<<Result<<endl;

    return 0;
}
