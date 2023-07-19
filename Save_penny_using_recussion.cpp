// In this Exercise you will create a program that calculate the total_amount of money that will be accumulated if you start with a penny and double it everywhere for n number of days...

// Ex.
// Day 1 : $0.01
// Day 2 : $0.02
// Day 3 : $0.04

#include<iostream>

using namespace std;

float penny(int ,float );

int main()
{
    int days;
    float amount;

    cout<<"Enter Number of days : ";
    cin>>days;

    cout<<"Enter initial amount : ";
    cin>>amount;

    cout<<"In "<<days<<" days your total amount is "<<penny(days,amount);

    return 0;
}

float penny(int days,float amount)
{
    if(days=0)
        return 0;
    else
    {
        2*amount;
        return(days--);
    }
}