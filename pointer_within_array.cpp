#include<iostream>

using namespace std;

int main()
{
    int m;
    cout<<"Enter the Size of Array : ";
    cin>>m;
    int arr[m];
    cout<<"Enter the Array Elements"<<endl;
    int *ptr = arr;

    for(int i=0;i<m;i++)
    {
        cin>>(*(ptr+i));
    }


    int num;

    cout<<"Enter the Number to be Find : ";
    cin>>num;

    for(int i=0;i<m;i++)
    {
        if(*(ptr+i) == num)
        {
            cout<<num<<" is present in the Array"<<endl;
            break;
        }

        else if(i==9)
        {
            cout<<num<<" is not present in the array"<<endl;
            ptr++;
        }
    }

    return 0;
}