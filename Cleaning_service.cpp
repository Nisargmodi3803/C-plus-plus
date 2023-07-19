/*
    Cleaning Service with Tax.....

    Small Room Cleaning Charge $25...
    Large Room Cleaning Charge $35...
    Tax = $6.6...
*/

#include<iostream>

using namespace std;

int main()
{
    int small_room,large_room;
    float tax=6.6,total;
    int small_price=25,large_price=35;

    cout<<endl;

    cout<<"Enter Number of Small Room you Want to Clean : ";
    cin>>small_room;

    cout<<"Enter Number of Large Room you want to Clean : ";
    cin>>large_room;

    cout<<endl;

    small_price = small_room*small_price;
    large_price = large_room*large_price;

    total = small_price + large_price + tax;

    cout<<"Your Cost for Cleaning is $"<<total<<endl;

    return 0;
}