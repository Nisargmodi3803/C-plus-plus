#include<iostream>
#include<string>

using namespace std;

int main()
{
    string s1("Road");
    string s2("Read");
    string s3("Red");

    cout<<endl;

    cout<<"s1 = "<<s1<<endl;
    cout<<"s2 = "<<s2<<endl;
    cout<<"s3 = "<<s3<<endl;

    int a = s1.compare(0,2,s2,0,2);
    int b = s2.compare(0,2,s1,0,2);
    int c = s2.compare(0,2,s3,0,2);
    int d = s2.compare(s2.size()-1,1,s3,s3.size()-1,1);

    cout<<"a = "<<a<<"\n b = "<<b<<"\n c = "<<c<<"\n d = "<<d<<endl;

    cout<<endl;

    cout<<"Before Swap\n";
    cout<<"s1 = "<<s1<<endl;
    cout<<"s2 = "<<s2<<endl;
    cout<<endl;

    s1.swap(s2);

    cout<<"After swap\n";
    cout<<"s1 = "<<s1<<endl;
    cout<<"s2 = "<<s2<<endl;
    cout<<endl;

    s2.swap(s1);

    cout<<"After swapping again\n";
    cout<<"s1 = "<<s1<<endl;
    cout<<"s2 = "<<s2<<endl;

    return 0;
}