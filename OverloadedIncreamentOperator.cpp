#include<iostream>

using namespace std;

class Integer
{
    int i;

    public:
        Integer(int I)
        {
            i = I;
        }

        Integer operator++()
        {
            Integer temp;
            temp.i = ++i;
            return temp;
        }

        void display()
        {
            cout<<i<<endl;
        }

};

int main()
{
    Integer A(3);

    cout<<"Before Increament Operator Value of A is ";
    A.display();

    Integer B = ++A;

    cout<<"After Increament Operator Value of A is ";
    A.display();

    return 0;
}