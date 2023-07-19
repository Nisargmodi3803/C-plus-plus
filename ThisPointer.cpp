#include<iostream>
#include<cstring>

using namespace std;

class person
{
    char name[25];
    int age;

    public:
        person(){}
        person(char *s,int a)
        {
            strcpy(name,s);
            age = a;
        }

        person operator>(person &P)
        {
            if(P.age > age)
            {
                return P;
            }
            else
            {
                return *this;
            }
        }

        void display()
        {
            cout<<name<<"its age is "<<age<<endl;
        }
};

int main()
{
    person p1("John", 35);
    person p2("sherlock", 30);
    person p3("chris", 32);

    person p;
    p = p1>p2;
    cout<<"Elder Person is ";
    p.display();

    p = p2>p3;
    cout<<"Elder Person is ";
    p.display();

    p = p1>p3;
    cout<<"Elder person is ";
    p.display();

    return 0;
}