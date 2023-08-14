#include<bits/stdc++.h>
#include<array>

using namespace std;

int main()
{
    array<int,4> arr = {1,2,3,4};

    int size = arr.size();
    cout<<"Size of Array is "<<size<<endl;

    //Simple printing...
    for(int i:arr)
    {
        cout<<i<<" ";
    }cout<<endl;

    //Printing using iterator...
    array<int,4>::iterator it;
    for(it=arr.begin();it!=arr.end();it++)
        cout<<*it<<" ";
    cout<<endl;

    cout<<"Is Array is Empty : "<<arr.empty()<<endl;
    cout<<"Element at position 2 : "<<arr.at(2)<<endl;
    cout<<"Starting Element in array : "<<arr.front()<<endl;
    cout<<"Ending Element in array : "<<arr.back()<<endl;

    return 0;
}