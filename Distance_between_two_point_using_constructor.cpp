// Create a Function which takes 2 points as Objects and Computes the Distance Between those Points...

#include<iostream>
#include<cmath>

using namespace std;

class Distance
{
    int x,y;

    public:
        Distance(int ,int );
        void display();

    friend void display_calculation(Distance,Distance);
};


int main()
{
    int a,b;

    cout<<"Enter X Co-Ordinate of Point P1 : ";
    cin>>a;

    cout<<"Enter Y Co-Ordinate of Point P1 : ";
    cin>>b;

    Distance p1(a,b);

    cout<<endl;

    cout<<"Enter X Co-Ordinate of Point P2 : ";
    cin>>a;

    cout<<"Enter Y Co-Ordinate of Point P2 : ";
    cin>>b;

    Distance p2(a,b);

    cout<<endl;

    cout<<"Point P1 : ";
    p1.display();
    
    cout<<endl;

    cout<<"Point P2 : ";
    p2.display();

    display_calculation(p1,p2);

    return 0;
}

Distance :: Distance(int a,int b)
{
    x=a;
    y=b;
}

void Distance :: display()
{
    cout<<"("<<x<<","<<y<<")";
}

void display_calculation(Distance p1,Distance p2)
{
    float Dis = sqrt(pow((p2.x - p1.x),2) + pow((p2.y - p1.y),2));

    cout<<endl;

    cout<<"Distance Between points p1 and p2 is "<<Dis<<endl;
}