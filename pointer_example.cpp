#include<iostream>

using namespace std;

int main()
{
    int a;
    int *ptr1=&a;
    int **ptr2 = &ptr1;

    cout<<"Address of a is "<<ptr1<<endl;
    cout<<"Address of ptr1 is "<<ptr2<<endl;

    ptr1++;
    ptr2++;

    cout<<"After Increamenting the Address of a is "<<ptr1<<endl;
    cout<<"After Increamenting the Address of ptr1 is "<<ptr2<<endl;

    return 0;
}