#include<iostream>

using namespace std;

void check(int x)
{
    try
    {
        if(x == 0)
            throw 'x';

        else
            if(x == 1)
                throw x;

        else
            if(x == 2)
                throw 1.0;

    }

    catch(int i)
    {
        cout<<"Interger Execption found"<<endl;
    }

    catch(char j)
    {
        cout<<"Char Execption found"<<endl;
    }

    catch(double z)
    {
        cout<<"Double Execption found"<<endl;
    }
}

int main()
{
    int x;
        cout<<"X = 0 : ";
        check(0);

        cout<<"x = 1 : ";
        check(1);

        cout<<"x = 2 :";
        check(2);
    

    cout<<"End of the Program"<<endl;

    return 0;
}       