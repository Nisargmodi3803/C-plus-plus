#include<iostream>

using namespace std;

class abc
{
    int id;
    static int count;

    public:
        void get_id()
        {
            cout<<"Enter ID : ";
            cin>>id;
            count++;
        }
        void display();
};

int abc :: count;

int main()
{
    abc nisarg,raj,yash;

    nisarg.get_id();
    raj.get_id();
    yash.get_id();

    nisarg.display();
    raj.display();
    yash.display();

    return 0;
}

void abc :: display()
{
    cout<<"ID is "<<id<<endl;
    cout<<"Count is "<<count<<endl;
}