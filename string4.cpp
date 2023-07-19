#include<iostream>
#include<string>

using namespace std;

void display(string & );

int main()
{
    string str1;
    cout<<"Status of String s1"<<endl;
    display(str1);
    cout<<endl;

    string str2;
    cout<<"Enter String : ";
    cin>>str2;
    cout<<"Status of string 2"<<endl;
    display(str2);
    cout<<endl;

    str1.resize(15);
    cout<<"Status of string 1"<<endl;
    display(str1);
    cout<<endl;

    return 0;
}

void display(string &str)
{
    cout<<"Size : "<<str.size()<<endl;
    cout<<"Length : "<<str.length()<<endl;
    cout<<"Capacity : "<<str.capacity()<<endl;
    cout<<"Maximum size : "<<str.max_size()<<endl;
    cout<<"Empty : "<<(str.empty() ? "Yes" : "No")<<endl;
}