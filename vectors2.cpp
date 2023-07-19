#include<iostream>
#include<vector>

using namespace std;

int main()
{
/*    
    vector<char> v{'N','I','S','A','R','G'};

    for(int i=0;i<v.size();i++)
    {
        cout<<v[i];
    }
*/

    vector<int> v;

    cout<<"Initial size : "<<v.size()<<endl;

    cout<<"Enter the elements of vector"<<endl;

    for(int i=0;i<4;i++)
    {
        cin>>v.at(i);
        v.push_back(i);
    }

    v.push_back(50);

    cout<<"Elements of vectors are"<<endl;

    for(int j=0;j<5;j++)
    {
        cout<<v[j]<<endl;
    }

    cout<<"Size : "<<v.size()<<endl;

    cout<<endl;

    return 0;
}