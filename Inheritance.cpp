#include<iostream>

using namespace std;

//Base Class...
class Employee
{
    public:
        int id;
        float salary;
        Employee()
        {
            id = 112;
            salary = 450000;
        }
};

//Derived Class...
class Programmer : public Employee                                                    
{
    int Known_Langauge_code;

    public:
        Programmer();
        void display();

};

int main()
{
    Employee E1;

    cout<<"ID of Employee [In Base Class(Employee Class)] : "<<E1.id<<endl;            //We can do that because ID is Public Member...
    cout<<"Salary of Employee [In Base Class(Employee Class)] : "<<E1.salary<<endl;    //We can do that because Salary is Public Member...

    cout<<endl;
    cout<<endl;

    Programmer p1;
    p1.display();

    cout<<endl;
    cout<<endl;

    return 0;
}

Programmer :: Programmer()
{
    Known_Langauge_code = 9;
    id = 58;
    salary = 500000;
}

void Programmer ::  display()
{
    cout<<"ID of Employee [In Derived Class(Programmer)] : "<<id<<endl;
    cout<<"Salary of Employee [In Derived Class(Programmer)] : "<<salary<<endl;
    cout<<"Programming Language code known by Employee [In Derived Class(Programmer)] : "<<Known_Langauge_code<<endl;
}