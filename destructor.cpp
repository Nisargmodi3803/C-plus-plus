#include<iostream>

using namespace std;

class Nisarg
{
    int a,b,c;

    public:
        Nisarg()
        {
            cout<<"Constructor has been called.."<<endl;
        }
        ~Nisarg()
        {
            cout<<"Destructor has been called and object has been destroy..."<<endl;
        }
};
int main()
{
    cout<<"In Main"<<endl;
    Nisarg n1;
    {
        cout<<"Enter into sub block"<<endl;
        Nisarg n2,n3;
        cout<<"Exiting the sub block"<<endl;
    }
    cout<<"Back to main block"<<endl;
    cout<<"Exiting the program"<<endl;

    return 0;
}
