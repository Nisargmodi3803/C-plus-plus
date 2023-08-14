#include<bits/stdc++.h>
#include<queue>

using namespace std;

int main()
{
    priority_queue<int> maxi;//Max Heap...
    priority_queue<int,vector<int>,greater<int> > mini;//Min Heap...

    maxi.push(0);
    maxi.push(1);
    maxi.push(2);
    maxi.push(3);
    maxi.push(4);

    int maxi_size = maxi.size();
    cout<<"Size of Maxi : "<<maxi_size<<endl;
    cout<<"Max Heap priority queue maxi : ";
    for(int i=0;i<maxi_size;i++)
    {
        cout<<maxi.top()<<" ";
        maxi.pop();
    }cout<<endl;
    cout<<"Maxi Empty or not : "<<maxi.empty()<<endl;

    mini.push(0);
    mini.push(1);
    mini.push(2);
    mini.push(3);
    mini.push(4);

    int mini_size = mini.size();
    cout<<"Size of Mini : "<<mini_size<<endl;
    cout<<"Min Heap priority queue Mini : ";
    for(int i=0;i<mini_size;i++)
    {
        cout<<mini.top()<<" ";
        mini.pop();
    }cout<<endl;
    cout<<"Mini Empty or not : "<<mini.empty()<<endl;

    return 0;
}