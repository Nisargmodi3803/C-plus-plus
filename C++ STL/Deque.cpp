#include<bits/stdc++.h>
#include<deque>

using namespace std;

void print(deque<int> d)
{
    deque<int>::iterator it;
    for(it=d.begin();it!=d.end();it++)
        cout<<*it<<" ";
    cout<<endl;
}

int main()
{
    deque<int> d;
    d.push_back(2);
    d.push_front(4);
    d.push_back(1);
    d.push_front(3);
    //Simple method to print...
    for(int i:d)
        cout<<i<<" ";
    cout<<endl;

    //Printing using iterator...
    print(d);

    cout<<"Before pop_back : ";
    print(d);
    d.pop_back();
    cout<<"After pop_back : ";
    print(d);

    cout<<"Before pop_front : ";
    print(d);
    d.pop_front();
    cout<<"After pop_front : ";
    print(d);

    d.erase(d.begin(),d.begin()+1);
    print(d);
    
    return 0;
}