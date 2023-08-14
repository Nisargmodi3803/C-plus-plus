#include<bits/stdc++.h>
#include<vector>

using namespace std;

void print(vector<int> v)
{
    vector<int>::iterator it;
    for(it=v.begin();it!=v.end();it++)
        cout<<*it<<" ";
    cout<<endl;
}
int main()
{
    vector<int> v;
    cout<<"Vector size is "<<v.size()<<" & Capacity is "<<v.capacity()<<endl;
    v.push_back(1);
    cout<<"Vector size is "<<v.size()<<" & Capacity is "<<v.capacity()<<endl;

    cout<<"Vector size is "<<v.size()<<" & Capacity is "<<v.capacity()<<endl;
    v.push_back(2);
    cout<<"Vector size is "<<v.size()<<" & Capacity is "<<v.capacity()<<endl;

    cout<<"Vector size is "<<v.size()<<" & Capacity is "<<v.capacity()<<endl;
    v.push_back(3);
    cout<<"Vector size is "<<v.size()<<" & Capacity is "<<v.capacity()<<endl;

    cout<<"Vector size is "<<v.size()<<" & Capacity is "<<v.capacity()<<endl;
    v.push_back(4);
    cout<<"Vector size is "<<v.size()<<" & Capacity is "<<v.capacity()<<endl;

    cout<<"Vector size is "<<v.size()<<" & Capacity is "<<v.capacity()<<endl;
    v.push_back(5);
    cout<<"Vector size is "<<v.size()<<" & Capacity is "<<v.capacity()<<endl;

    cout<<"Printing all the elemets inside vector : ";

    for(int i : v)
    {
        cout<<i<<" ";
    }cout<<endl;

    //Printing using iterator...
    print(v);

    cout<<"Value at index-2 is "<<v.at(2)<<endl;
    cout<<"Front element of vector is "<<v.front()<<endl;
    cout<<"Last element of vector is "<<v.back()<<endl;

    cout<<"Elements before pop operation : ";
    print(v);

    v.pop_back();

    cout<<"Elements after pop operation : ";
    print(v);

    cout<<"Before clearing the vector size of vector is "<<v.size()<<" & Capacity is "<<v.capacity()<<endl;
    v.clear();
    cout<<"After clearing the vector size of vector is "<<v.size()<<" & capacity is "<<v.capacity()<<endl; 


    vector<int>v1 (5,1);
    print(v1);

    vector<int>v2(v1);
    print(v2);

    return 0;
}