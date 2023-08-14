#include<bits/stdc++.h>
#include<list>

using namespace std;

void print(list<int> l)
{
    list<int>::iterator it;
    for(it=l.begin();it!=l.end();it++)
        cout<<*it<<" ";
    cout<<endl;
}
int main()
{
    list<int> l;

    l.push_back(2);
    l.push_front(1);
    l.push_back(4);
    l.push_front(3);
    l.push_front(5);
    l.push_back(6);

    cout<<"Printing List : ";
    for(int i : l)
        cout<<i<<" ";
    cout<<endl;

    //Printing using iterator...
    print(l);

    l.erase(l.begin());
    cout<<"list after removing of first element : ";
    print(l);

    cout<<"Size of list : "<<l.size()<<endl;

    return 0;
}