/*

#include<iostream>

using namespace std;

class Complex
{
    int real,img;

    public:
        void getdata()
        {
            cout<<"Enter the Real Part of Complex Number : ";
            cin>>real;
        
            cout<<"Enter the img Part of Complex Number : ";
            cin>>img;

            cout<<endl;
        }

        void display()
        {
            cout<<real<<" + "<<img<<"i"<<endl;
        }
};

int main()
{
    Complex *c1;

    c1->getdata();
    c1->display();

    return 0;
}

*/



#include<iostream>

using namespace std;

class items
{
    int code;
    float price;

    public:
        void getcode()
        {
            cout<<"Enter the Code : ";
            cin>>code;

            cout<<"Enter the Cost : ";
            cin>>price;

            cout<<endl;
        }

        void display()
        {
            
            cout<<code<<"\t"<<price<<endl;
        }
};

int main()
{
    items p[3];
    items *dis = p;
    items *ptr = p;

    for(int i=0;i<3;i++)
    {
        cout<<"For Item-"<<i+1<<endl;
        (ptr+i)->getcode();
    }

    cout<<"Code\tCost"<<endl;
    
    for(int i=0;i<3;i++)
    {
        
        // ptr->display();          //This Will not Work because pointer is Pointing to last Element of Array....
        (dis+i)->display();
    }

    
    return 0;
}