#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector v1,v2;

    v1.push_back(10);
    v1.push_back(20);

    v2.push_back(100);
    v2.push_back(200);

    cout<<"Value of v1 at 0 index is "<<v1.at(0)<<endl;
    cout<<"Value of v1 at 1 index is "<<v2.at(0)<<endl;
    cout<<"Size of v1 is "<<v1.size()<<endl;

    cout<<endl;

    cout<<"Value of v2 at 0 index is "<<v2.at(0)<<endl;
    cout<<"Value of v2 at 1 index is "<<v2.at(0)<<endl;
    cout<<"Size of v2 is "<<v2.size()<<endl;

    cout<<endl;

    
    return 0;
}