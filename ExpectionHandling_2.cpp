/*

#include<iostream>

using namespace std;

void divide(int x,int y,int z)
{
    
        if(z/(x-y) != 0)
        {
            cout<<"Result : "<<z/(x-y)<<endl;
        }
        else
        {
            throw(x-y);
        }
    
}

int main()
{
    try
    {
        divide(10,20,30);

        divide(10,10,20);
    }

    catch(int i)
    {
        cout<<"Expection Found : Divide by zero..."<<endl;
    }

    cout<<"End"<<endl;
    
    return 0;
}

*/


#include<iostream>

using namespace std;

void divide(int n,int d)
{
    if(d==0)
    {
        throw d;
    }

    int divide = n/d;
    cout<<"Division : "<<divide<<endl;
}

int main()
{
    int Numerator,Denominator;

    try
    {
        cout<<"Enter the Numerator : ";
        cin>>Numerator;

        cout<<"Enter the Denominator : ";
        cin>>Denominator;

        divide(Numerator,Denominator);


        cout<<"Enter the Numerator : ";
        cin>>Numerator;

        cout<<"Enter the Denominator : ";
        cin>>Denominator;

        divide(Numerator,Denominator);
    }

    catch(int i)
    {
        cout<<"Execption found : Divide by Zero"<<endl;
    }

    cout<<"End of the program"<<endl;
    return 0;
}