#include<iostream>
#include<string>

using namespace std;

class binary
{
    string s;

    public:
        void read();
        void chk_binary();
        void display();
        void ones_compliment();
};

int main()
{
    binary a;

    a.read();
    a.chk_binary();
    a.display();
    a.ones_compliment();
    a.display();

    return 0;
}

void binary :: read()
{
    cout<<"Enter Binary Number : ";
    cin>>s;
}

void binary :: chk_binary()
{
    for(int i=0;i<s.length();i++)
    {
        if(s.at(i)!='0' && s.at(i)!='1')
        {
            cout<<"Error it is not Binary Number"<<endl;
            exit(0);
        }
        else
        {
            cout<<"It is Binary Number"<<endl;
        }
    }
}

void binary :: display()
{
    for(int i=0;i<s.length();i++)
    {
        cout<<s.at(i);
    }

    cout<<endl;
}

void binary ::  ones_compliment()
{
    for(int i=0;i<s.length();i++)
    {
        if(s.at(i)=='0')
        {
            s.at(i)='1';
        }
        else
        {
            s.at(i)='0';
        }
    } 
}