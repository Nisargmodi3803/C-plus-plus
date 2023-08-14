#include<bits/stdc++.h>
#include<queue>

using namespace std;

int main()
{
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);

    cout<<"front element of queue : "<<q.front()<<endl;
    q.pop();
    cout<<"After pop operation front element of queue : "<<q.front()<<endl;

    cout<<"Size of queue : "<<q.size()<<endl;

    return 0;
}