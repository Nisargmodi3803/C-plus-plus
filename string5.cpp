#include<iostream>
#include<string>

using namespace std;

/*
int main()
{
    string s1;
    getline(cin,s1);

    cout<<"String s1 contains : ";
    for(int i=0;i<s1.length();i++)
        cout<<s1[i];
    
    cout<<endl;

    cout<<"String s1 contains : ";
    for(int j=0;j<s1.length();j++)
        cout<<s1.at(j);

    return 0;
}
*/

int main()
{
    string s("one two three four five");

    cout<<"two is found at position : "<<s.find("two")<<endl;

    cout<<"first r found at position : "<<s.find_first_of('r')<<endl;

    cout<<"Last r found at positon : "<<s.find_last_of('r')<<endl;

    cout<<"Retrive and print substring two : "<<s.substr(4,9);

    return 0;
}