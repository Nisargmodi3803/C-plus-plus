#include<iostream>

using namespace std;

template<class T>
void bubble(T *a,int size)
{
    T temp;

    for(int i=0;i<size-1;i++)
    {
        for(int j=size-1;i<j;j--)
        {
            if(a[j] < a[j-1])
            {
                temp = a[j];
                a[j] = a[j-1];
                a[j-1] = temp;
            }
        }
    }
}

int main()
{
    int A[10]={9,10,1,2,4,6,7,5,8,3};
    float B[10]={9.9,10.10,1.1,2.2,4.4,6.6,7.7,5.5,8.8,3.3};
    int size = 10;

    bubble(A,10);
    bubble(B,10);

    cout<<"Sorted Array A : ";
    for(int i=0;i<size;i++)
    {
        cout<<A[i]<<" ";
    }

    cout<<endl;

    cout<<"Sorted Array B : ";
    for(int i=0;i<size;i++)
    {
        cout<<B[i]<<" ";
    }

    cout<<endl;

    return 0;
}