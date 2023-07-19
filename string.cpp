#include<iostream>
#include<string>

using namespace std;

int main()
{
    string s1;

    string s2("Nisarg");
    s1=s2;

    string s3;
    s3=s1+" Modi";

    cout<<s3<<endl;

    getline(cin,s1);

    cout<<s1<<endl;

    s2+=s1;

    cout<<s2<<endl;

    string s4(s1);

    s4+=" Modi";

    cout<<s4<<endl;

    return 0;
}