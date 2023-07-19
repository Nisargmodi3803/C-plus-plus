#include<iostream>

using namespace std;

class BaseClass
{
    public:
        int base_var;
        void display()
        {
            cout<<"Base Class Display Function is Running and Value of Base_var is "<<base_var<<endl;
            cout<<endl;
        }
};

class DerviedClass : public BaseClass
{
    public:
        int dervied_var;
        void display()
        {
            cout<<"Dervied Class Display function is Running"<<endl;
            cout<<"Value of Base_var is "<<base_var<<endl;
            cout<<"Value of Dervied_var is "<<dervied_var<<endl<<endl;
        }
};

int main()
{
    BaseClass * Base_pointer;
    BaseClass Base_obj;

    DerviedClass * Dervied_pointer;
    DerviedClass Dervied_obj;

    Base_pointer = &Dervied_obj;  // Do not throw Error...

    // Base_pointer->dervied_var = 56;   //this will throw Error...

    Base_pointer->base_var = 58;    //This will work...
    Base_pointer->display();        //This will work...

    Base_pointer = &Base_obj;         //This will obvisouly work...
    Base_pointer->base_var = 112;
    Base_pointer->display();

    Dervied_pointer = &Dervied_obj;     //This will obviously work...
    Dervied_pointer->dervied_var = 5800;
    Dervied_pointer->display();

    Dervied_pointer->base_var = 1120;
    Dervied_pointer->display();

    // Dervied_pointer = &Base_obj;    //This won't work....


    return 0;
}