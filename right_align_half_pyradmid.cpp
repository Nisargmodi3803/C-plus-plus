#include<iostream>

using namespace std;

int main()
{
    int n;

    cout<<"Enter Number of lines : ";
    cin>>n;

    for(int i=1;i<=n;i++)
    {
        for(int k=n-1;k>=i;k--)
        {
            cout<<" ";
        }

        for(int j=1;j<=i;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }

    return 0;
}