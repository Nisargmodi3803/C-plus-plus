#include<iostream>

using namespace std;

template<class T>
void swap(T *a,T *b)
{
    T temp = *a;
    *a = *b;
    *b = temp;
}

void Fun(int x,int y,float m,float n)
{
    cout<<"Before Swapping Function\n\tValue of x is "<<x<<"\n\tValue of y is "<<y<<endl;
    swap(&x,&y);
    cout<<"After Swapping Function\n\tValue of x is "<<x<<"\n\tValue of y is "<<y<<endl;

    cout<<endl;

    cout<<"Before Swapping Function\n\tValue of m is "<<m<<"\n\tValue of n is "<<n<<endl;
    swap(&m,&n);
    cout<<"After Swapping Function\n\tValue of m is "<<m<<"\n\tValue of n is "<<n<<endl;

}

int main()
{
    Fun(100,200,1.1,2.2);

    return 0;
}