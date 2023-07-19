/*
    Below is an Example of Hybrid Inheritance...
*/
#include<iostream>
#include<string>

using namespace std;

class Student
{
    protected:
        int roll_no;
        string name;

    public:
        void get_Student_info();
        void display_Student_info();
};

void Student :: get_Student_info()
{
    cout<<"Enter Student Name : ";
    getline(cin,name);

    cout<<"Enter Student Roll No. : ";
    cin>>roll_no;
}

void Student :: display_Student_info()
{
    cout<<"Displaying Informations"<<endl;

    cout<<"Name : "<<name<<endl;
    cout<<"Rolll No. : "<<roll_no<<endl;
}


class Exam : public virtual Student
{
    protected:
        float Subject1;
        float Subject2;
        float Subject3;

    public:
        void get_marks();
        void display_marks();
};

void Exam :: get_marks()
{
    cout<<"Enter the Marks of Subject1 : ";
    cin>>Subject1;

    cout<<"Enter the Marks of Subject2 : ";
    cin>>Subject2;

    cout<<"Enter the Marks of Subject3 : ";
    cin>>Subject3;
}

void Exam :: display_marks()
{
    cout<<"Below are the Marks and Score"<<endl;
    cout<<"Subject1 : "<<Subject1<<endl;
    cout<<"Subject2 : "<<Subject2<<endl;
    cout<<"Subject3 : "<<Subject3<<endl;
}


class Sports : public virtual Student
{
    protected:
        float score;

    public:
        void get_score();
        void display_score();
};

void Sports :: get_score()
{
    cout<<"Enter Your Sports Score : ";
    cin>>score;
}

void Sports :: display_score()
{
    cout<<"Sports : "<<score<<endl;
}


class Result : public virtual Exam,public virtual Sports
{
    float total;

    public:
        void calculate();
        void Display();
};

void Result :: calculate()
{
    total = Subject1 + Subject2 + Subject3 + score;
}

void Result :: Display()
{
    display_Student_info();
    cout<<endl;

    display_marks();
    display_score();
    cout<<endl;

    cout<<"Total of your Marks and Score : "<<total<<endl;
}

int main()
{
    Result s1;

    s1.get_Student_info();
    s1.get_marks();
    s1.get_score();
    s1.calculate();

    cout<<endl;

    s1.Display();

    return 0;
}