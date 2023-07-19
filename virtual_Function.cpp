#include<iostream>

using namespace std;

class Base
{
    public:
        virtual void display()
        {
            cout<<"1. Base Class display function runs "<<endl;
        }

        void show()
        {
            cout<<"2. Base Class show function runs"<<endl;
        }
};

class Dervied : public Base
{
    public:
        void display()
        {
            cout<<"3. Dervied Class display function runs"<<endl;
        }

        void show()
        {
            cout<<"4. Dervied class show function runs"<<endl;
        }
};

int main()
{
    Base B;
    Dervied D;
    Base *Base_pointer;    

    cout<<"Base class pointer to dervied class object"<<endl;
    Base_pointer = &D;    
    Base_pointer->display();      //Dervied Class function will run...
    Base_pointer->show();         //Base Class function will run...

    Dervied *Dervied_pointer;

    cout<<"\nDervied class pointer to dervied class object"<<endl;
    Dervied_pointer = &D;
    Dervied_pointer->display();
    Dervied_pointer->show();
    
    return 0;
}