#include<iostream>
#include<cstring>

using namespace std;

class String
{
    char *str;
    int length;

    public:
        String();
        String(char*);
        void display();
        void join(String&,String&);
};

int main()
{
    char* s;

    cout<<"Enter the String s1 : ";
    cout>>s;

    String s1(s);
    
    // cout<<"Enter the String s2 : ";
    // cout>>s;

    // String s2(s);

    // cout<<"Enter the String s3 : ";
    // cout>>s;

    // String s3(s);

    cout<<"String s1 : ";
    s1.display();

    // cout<<"String s2 : ";
    // s2.display();

    // cout<<"String s3 : ";
    // s3.display();

    return 0;
}

String :: String()
{
    length = 0;
    str = new char [length+1];
}

String :: String(char *s)
{
    length = strlen(s);
    str = new char[length + 1];
}

void String :: display()
{
    cout<<str<<endl;
}