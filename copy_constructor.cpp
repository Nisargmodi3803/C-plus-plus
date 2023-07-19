#include<iostream>

using namespace std;

class code
{
    int a;

    public:
        code()
        {
            a=0;
        }
        code(int num)
        {
            a = num;
        }

        code(code &n)
        {
            a = n.a;
            cout<<"Copy Constructor!!!"<<endl;
            cout<<"In C3 : "<<a;
        }

        void display()
        {
            cout<<a<<endl;
        }
};

int main()
{
    code c1(5),c2,c4;

    cout<<"In C1 : ";
    c1.display();

    cout<<"In C2 : ";
    c2.display();

    code c3 = c1;
    // cout<<"In C3 : ";    //This will be comment out when copy constructor is not created....
    // c3.display();        //Every Constructor has it's own copy constructor when copy constructor is not created...
    
    // c4 = c2;     //Copy Constructor is not called....But will not throw Error...

    return 0;
}