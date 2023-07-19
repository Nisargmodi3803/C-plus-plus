#include<iostream>

using namespace std;

int main()
{
    int age;
    double salary_wage;
    char name[20];

    cout<<"Enter Employee name : ";
    cin>>name;

    cout<<"Enter Age of Employee : ";
    cin>>age;

    cout<<"Enter Salary Wage of Employee : ";
    cin>>salary_wage;

    cout<<endl;

    cout<<"Name of Employee is "<<name<<endl<<"Age of Employee is "<<age<<endl<<"Salary Wage of Employee is "<<salary_wage<<endl;

    return 0;
}