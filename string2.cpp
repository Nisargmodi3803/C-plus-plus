#include<iostream>
#include<string>

using namespace std;

int main()
{
    string s1("12345");
    string s2("abcde");

    cout<<"Orginal string s1 is "<<s1<<endl;
    cout<<"Orginal string s2 is "<<s2<<endl;

    //Inserting a string into another...

    cout<<"Place s2 inside s1 "<<endl;
    s1.insert(4,s2);
    cout<<"Modified string s1 is "<<s1<<endl;

    //Removing characters in a string...

    cout<<"Remove 5 characters from s1"<<endl;
    s1.erase(4,5);
    cout<<"S1 : "<<s1<<endl;

    //Replacing characters in a string...

    cout<<"Replace Middle 3 characters in s2 with s1"<<endl;
    s2.replace(1,3,s1);
    cout<<"S2 : "<<s2<<endl;
    
    return 0;
}