#include<iostream>

using namespace std;

class Member
{
    static int count;
    int n;

    public:
        void getdata(int a)
        {
            n = a;
            count++;
        }

        void show_count()
        {
            cout<<"Count : "<<count<<endl;
        }

        void show_data()
        {
            cout<<"Number n is "<<n<<endl;
        }
};

// int Member :: count = 10;
int Member :: count;

int main()
{
    Member m,h,j;

    m.show_count();

    m.getdata(1);
    h.getdata(2);
    j.getdata(3);

    m.show_count();

    m.show_data();
    h.show_data();
    j.show_data();

    return 0;
}