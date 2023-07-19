#include<iostream>

using namespace std;

class items
{
    int item_id[20];
    float item_price[20];
    int count;

    public:
        void counter()
        {
            count=0;
        }
        void Add_Data();
        void display_total_sum();
        void update_price();
        void display();
};

int main()
{
    items a;
    int i;

    cout<<"Enter your choices for following"<<endl;
    cout<<"Press 1 for Adding Data"<<endl;
    cout<<"Press 2 for Displaying Total sum of your products"<<endl;
    cout<<"Press 3 for Update Price of ur product"<<endl;
    cout<<"Press 4 for Diplay Data Table"<<endl;
    cout<<"Press 5 for Exit"<<endl;

    cout<<"Your choice is ";
    cin>>i;

    do
    {
        switch(i)
        {
            case 1:
                a.Add_Data();
                break;

            case 2:
                a.display_total_sum();
                break;

            case 3:
                a.update_price();
                break;

            case 4:
                a.display();
                break;

            case 5:
                cout<<"Exiting Program"<<endl;
                break;

            default:
                cout<<"Please Enter Valid Choice from Above Choice..."<<endl;
        }
    }
    while(i!=5);

    return 0;
}

void items :: Add_Data()
{
    cout<<"Enter ID of Your Product : ";
    cin>>item_id[count];
    cout<<"Enter Price of Your Product : ";
    cin>>item_price[count];
    count++;
    cout<<endl;
}

void items :: display_total_sum()
{
    float sum=0;

    for(int i=0;i<count;i++)
    {
        sum+=item_price[count];
    }

    cout<<"Total Sum of Your Products is "<<sum<<endl;
    cout<<endl;
}

void items :: update_price()
{
    int a;
    float price;

    cout<<"Enter the ID of Products whose Price You Want to Upadate : ";
    cin>>a;

    cout<<"Enter the price you want to change : ";
    cin>>price;

    for(int i=0;i<count;i++)
    {
        if(item_id[count] == a)
        {
            item_price[count] = price;
        }
    }

    cout<<endl;
}

void items :: display()
{
    cout<<"Displaying Table"<<endl;
    cout<<"\nID\tPrice"<<endl;

    for(int i=0;i<count;i++)
    {
        cout<<item_id[count];
        cout<<"\t"<<item_price[count];
    }

    cout<<endl;
}