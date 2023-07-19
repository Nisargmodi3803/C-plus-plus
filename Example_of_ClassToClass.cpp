/*

// Method-1....

#include<iostream>

using namespace std;

class invert_2;

class invert_1
{
    int code,item;
    float cost;

    public:
        invert_1(int cd,int i,int ct)
        {
            code = cd;
            item = i;
            cost = ct;
        }

        void display()
        {
            cout<<"For Invert 1 "<<endl;
            cout<<"Code : "<<code<<endl;
            cout<<"Cost : "<<cost<<endl;
        }

        operator float()
        {
            return(item*cost);
        }

        friend invert_2;
};

class invert_2
{
    int code,item;
    float cost;

    public:
        invert_2(invert_1 I)
        {
            code = I.code;
            item = I.item;
            cost = I.item*I.cost;
        }

        void display()
        {
            cout<<"\nFor Invert 2"<<endl;
            cout<<"Code : "<<code<<endl;
            cout<<"Item : "<<item<<endl;
            cout<<"Cost : "<<cost<<endl;
        }
};

int main()
{
    invert_1 I1(100,5,150.0);

    float total_value;
    total_value = I1;   //class to base...[operator overloading required]
    I1.display();
    cout<<"Total Cost for Invert 1 is "<<total_value<<endl;

    invert_2 I2 = I1;   //Class to Class...[Via Constructor]
    I2.display();

    return 0;
}

*/




// Method-2...

#include<iostream>

using namespace std;

class invert_2
{
    int code,item;
    float cost;

    public:
        invert_2(int cd,int i,float ct)
        {
            code = cd;
            item = i;
            cost = i*ct;
        }

        void display()
        {
            cout<<"\nFor Invert 2"<<endl;
            cout<<"Code : "<<code<<endl;
            cout<<"Item : "<<item<<endl;
            cout<<"Cost : "<<cost<<endl;
        }
};

class invert_1
{
    int code,item;
    float cost;

    public:
        invert_1(int cd,int i,int ct)
        {
            code = cd;
            item = i;
            cost = ct;
        }

        void display()
        {
            cout<<"For Invert 1 "<<endl;
            cout<<"Code : "<<code<<endl;
            cout<<"Cost : "<<cost<<endl;
        }

        operator float()
        {
            return (item*cost);
        }

        operator invert_2()
        {
            invert_2 temp(code,item,cost);

            return temp;
        }
};



int main()
{
    invert_1 I1(100,5,150.0);

    float total_value;
    total_value = I1;       //Class to Base...
    I1.display();
    cout<<"Total Cost for Invert 1 is "<<total_value<<endl;

    invert_2 I2 = I1;       //Class to Class via Operator overloading...
    I2.display();

    return 0;
}