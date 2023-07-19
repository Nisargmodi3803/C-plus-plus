#include<iostream>

using namespace std;

void check(int i)
{
    try
    {
        if(i==0)
            throw i;

        else
            if(i==1)
                throw 'i';

        else
            if(i==2)
                throw 2.0;
    }

    catch(...)
    {
        cout<<"Execption Found"<<endl;
    }
}

int main()
{
    int x;

    cout<<"For x = 0 : ";
    check(0);

    cout<<"For x = 1 : ";
    check(1);

    cout<<"For x = 2 : ";
    check(2);

    cout<<"End"<<endl;

    return 0;
}