// In this Program We Will Find Interst...

#include<iostream>

using namespace std;

class BankInterst
{
    int principal_amount;
    int years;
    float rate;
    float return_value;

    public:
        BankInterst()
        { }
        BankInterst(int ,int ,float = 0.12);        
        BankInterst(int ,int ,int);        
        void display();
};

int main()
{
    BankInterst b1,b2,b3;

    int p,y;
    int R;   // Rate value in integer [Example : rate = 5%]
    float r;  // Rate value in Float [Example : rate = 0.05]

    cout<<"Enter the Principal Amount : ";
    cin>>p;

    cout<<"Enter the Time Period in year : ";
    cin>>y;

    cout<<"Enter the Rate : ";
    cin>>r;


    b1 = BankInterst(p,y,r);
    
    cout<<endl;

    cout<<"Enter the Principal Amount : ";
    cin>>p;

    cout<<"Enter the Time Period in year : ";
    cin>>y;

    cout<<"Enter the Rate : ";
    cin>>R;


    b2 = BankInterst(p,y,R);

    cout<<endl;

    cout<<"Enter the Principal Amount : ";
    cin>>p;

    cout<<"Enter the Time Period in year : ";
    cin>>y;

    b3 = BankInterst(p,y);

    cout<<endl;

    cout<<"Deposit 1"<<endl;
    b1.display();

    cout<<endl;

    cout<<"Deposit 2"<<endl;
    b2.display();

    cout<<endl;

    cout<<"Deposit 3"<<endl;
    b3.display();

    return 0;
}

BankInterst :: BankInterst(int p,int y,float r)
{
    principal_amount = p;
    years = y;
    rate = r;
    return_value = principal_amount;

    for(int i=1;i<=years;i++)
    {
        return_value = return_value*(1+rate);
    }
}

BankInterst :: BankInterst(int p,int y,int R)
{
    principal_amount = p;
    years = y;
    rate = float(R)/100;
    return_value = principal_amount;

    for(int i=1;i<=years;i++)
    {
        return_value = return_value*(1+rate);
    }
}

void BankInterst :: display()
{
    cout<<"Principal Amount is "<<principal_amount<<" , After "<<years<<" the Your Principal Amount Becomes "<<return_value<<endl;
}