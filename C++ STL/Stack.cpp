#include<bits/stdc++.h>
#include<stack>

using namespace std;

int main()
{
    stack<string> s;
    s.push("Nisarg");
    s.push("Nilesh");
    s.push("Kajal");
    s.push("Modi");

    cout<<"Top element : "<<s.top()<<endl;
    s.pop();
    cout<<"After pop operation top element : "<<s.top()<<endl;

    cout<<"Size of Stack : "<<s.size()<<endl;

    return 0;
}