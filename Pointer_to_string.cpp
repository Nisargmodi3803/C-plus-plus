#include<iostream>
#include<cstring>

using namespace std;

class city
{
    protected:
    char *name;
    int len;

    public:
        void getCityName()
        {
            char *s;
            s = new char[25];

            cout<<"Enter City Name : ";
            cin>>s;

            len = strlen(s);

            name = new char[len+1];

            strcpy(name, s);

            cout<<endl;
        }

        void displayCityName()
        {
            cout<<"City Name is "<<name<<endl;
        }
};

int main()
{
    char *s;
    int option;
    int n = 1;
    city *C[10];


    do
    {
        C[n]->getCityName();
        n++;

        cout<<"Enter Ur Option\n1 For Entering City Name\n0 For come out of Loop"<<endl;
        cout<<"Your Option is ";
        cin>>option;
    }
    while(option);

    cout<<endl<<endl;

    for(int i=1;i<n;i++)
    {
        C[i]->displayCityName();
    }

    return 0;
}