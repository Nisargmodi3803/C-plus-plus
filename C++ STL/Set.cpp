#include<bits/stdc++.h>
#include<set>

using namespace std;

int main()
{
    set<int> s;

    s.insert(4);
    s.insert(5);
    s.insert(2);
    s.insert(0);
    s.insert(1);
    s.insert(5);
    s.insert(8);
    s.insert(1);
    s.insert(6);

    cout<<"Size of set : "<<s.size()<<endl;

    cout<<"Set s : ";
    for(auto i : s)
        cout<<i<<" ";
    cout<<endl;

    set<int>::iterator it = s.begin();
    it++;
    s.erase(it);
    for(auto i : s)
        cout<<i<<" ";
    cout<<endl;

    cout<<"5 present or not : "<<s.count(5)<<endl;

    set<int>::iterator itr = s.find(5);

    for(auto i=itr;i!=s.end();i++)
    {
        cout<<*i<<" ";
    }cout<<endl;
    return 0;
}