#include<iostream>

using namespace std;

class Student
{
    protected:
        char name[15];
        int roll_no;

    public:
        void get_student_data();
        void display_student_data();
};

void Student :: get_student_data()
{
    cout<<"Enter the Name of Student : ";
    cin>>name;

    cout<<"Enter the ROll No. of Student : ";
    cin>>roll_no;
}

void Student :: display_student_data()
{
    cout<<"Name : "<<name<<endl;
    cout<<"Roll No. : "<<roll_no<<endl;
}


class Exam : public Student
{
    protected:
        float pps;
        float maths;
        float physics;

    public:
        void get_marks();
        void display_marks();
};

void Exam :: get_marks()
{
    cout<<"Enter the Marks of Physics : ";
    cin>>physics;

    cout<<"Enter the Marks of Maths : ";
    cin>>maths;

    cout<<"Enter the Marks of PPS : ";
    cin>>pps;
}

void Exam :: display_marks()
{
    cout<<"PPS : "<<pps<<endl;
    cout<<"Maths : "<<maths<<endl;
    cout<<"Physics : "<<physics<<endl;
}


class Result : public Exam
{
    int percentage;

    public:
        void calculate_result();
        void display_result();
};

void Result :: calculate_result()
{
    percentage = (pps + maths + physics)*100/300;
}

void Result :: display_result()
{
    display_student_data();
    display_marks();
    calculate_result();

    cout<<"Result : "<<percentage<<" %"<<endl;
} 

int main()
{
    Result s1;

    s1.get_student_data();
    s1.get_marks();
    cout<<endl;
    s1.display_result();

    return 0;
}