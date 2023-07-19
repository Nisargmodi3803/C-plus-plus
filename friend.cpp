#include<iostream>

using namespace std;

class sample
{
    int a;
    int b;

    public:
        void setdata(int ,int );
        friend float mean(sample);
        
};

int main()
{
    sample n;

    int x,y;

    cout<<"Enter the two Numbers"<<endl;
    cin>>x>>y;

    n.setdata(x,y);

    cout<<"Mean of that two numbers is "<<mean(n);

    return 0;
}

void sample :: setdata(int x,int y)
{
    a=x;
    b=y;
}

inline float mean(sample n)
{
    return (n.a + n.b)/2.0;
}