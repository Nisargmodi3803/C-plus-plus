#include<iostream>

using namespace std;

void check(int x) throw(int,double)
{      
      if(x == 0)
            throw 'x';

        
            
        if(x == 1)
                throw x;

        else
            if(x == 2)
                throw 1.0;

    

    
}

int main()
{
    int x;
    try
    {

    
        cout<<"X = 0 : ";
        check(0);

        cout<<"x = 1 : ";
        check(1);

        cout<<"x = 2 :";
        check(2);
    }

    catch(int)
    {
        cout<<"Interger Execption found"<<endl;
    }

    catch(char)
    {
        cout<<"Char Execption found"<<endl;
    }

    catch(double)
    {
        cout<<"Double Execption found"<<endl;
    }
    

    cout<<"End of the Program"<<endl;

    return 0;
}       