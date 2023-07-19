#include<iostream>
#include<string>

using namespace std;

int main()
{
    string s1;
    string s2;
    
    cout<<"Enter String 1 : ";
    getline(cin,s1);

    cout<<"Enter String 2 : ";
    getline(cin,s2);

    cout<<endl;

    cout<<"String S1 is "<<s1<<endl;
    cout<<"String S2 is "<<s2<<endl;

/*
    if(s1!=s2)
        cout<<s1<<" and "<<s2<<" are not same"<<endl;

    else 
        cout<<s1<<" and "<<s2<<" are equal"<<endl;
    

    if (s1>s2)
        cout<<s1<<" String is greater then "<<s2<<" string"<<endl;

    else
        cout<<s1<<" String is smaller then "<<s2<<" string"<<endl;

    string s3 = s1+s2;

    cout<<"String s3 is "<<s3<<endl;
*/

    if(s3==s1+s2)
        cout<<"Strings are same";


    int x = s1.compare(s2);

    if(x==0)
        cout<<s1<<" and "<<s2<<" are not same"<<endl;

    else if (x>0)
        cout<<s1<<" String is greater then "<<s2<<" string"<<endl;

    else
        cout<<s1<<" String is smaller then "<<s2<<" string"<<endl;

    
    return 0;
}