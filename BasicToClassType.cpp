/*

// This just simple example...

#include<iostream>

using namespace std;

class Number
{
    int a;

    public:
        void display()
        {
            cout<<"Value of A is "<<a<<endl;
        }

        Number(int n)
        {
            a = n;
        }
};

int main()
{
    Number num = 100;

    num.display();

    return 0;
}

*/


#include<iostream>

using namespace std;

class Time
{
    int min,hrs;

    public:
        void display()
        {
            cout<<"Time : "<<hrs<<" Hours and "<<min<<" minutes"<<endl;
        }

        Time(int T)
        {
            hrs = T/60;
            min = T%60;
        }
};

int main()
{
    int T;

    cout<<"Enter the Time Duration : ";
    cin>>T;

    Time t1 = T;

    t1.display();

    return 0;
}