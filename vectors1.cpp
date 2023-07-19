#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector<int> vec{10,20,30,40,50};
    int i;

/*
    cout<<"Vector at position 0 : "<<vec.at(0)<<endl;
    cout<<"Vector at position 1 : "<<vec.at(1)<<endl;
    cout<<"Vector at position 2 : "<<vec.at(2)<<endl;
    cout<<"Vector at position 3 : "<<vec.at(3)<<endl;
    cout<<"Vector at position 4 : "<<vec.at(4)<<endl;
*/

    int size = vec.size();

    cout<<"Size of vector is "<<size<<endl<<endl;

    for(i=0;i<size;i++)
        cout<<vec.at(i)<<endl;

    vec.at(0)=100;
    vec.at(4)=1000;

    cout<<endl;
/*    
    cout<<"Vector at position 0 : "<<vec.at(0)<<endl;
    cout<<"Vector at position 1 : "<<vec.at(1)<<endl;
    cout<<"Vector at position 2 : "<<vec.at(2)<<endl;
    cout<<"Vector at position 3 : "<<vec.at(3)<<endl;
    cout<<"Vector at position 4 : "<<vec.at(4)<<endl;
*/

    for(i=0;i<size;i++)
        cout<<vec.at(i)<<endl;

    cout<<endl;

    //vec.at(10)=100;      //This will not work....
    return 0;
}