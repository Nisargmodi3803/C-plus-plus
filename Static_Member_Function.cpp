#include<iostream>

using namespace std;

class Member
{
    static int count;
    int num;

    public:
        void getdata(int a)
        {
            num = a;
        }

        void show_data()
        {
            cout<<"Count = "<<count<<endl;
        }

        static void show_count()
        {
            cout<<"Number is "<<count<<endl;
        }
};

int Member :: count;

int main()
{
    Member i,j,k;

    i.show_count();

    i.getdata(100);
    j.getdata(200);
    k.getdata(300);

    j.show_count();

    i.show_data();    
    j.show_data();    
    k.show_data();    

    k.show_count();
    return 0;
}