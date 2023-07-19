/*

#include<iostream>

using namespace std;

class Number
{
    int a;

    public:
        void display()
        {
            cout<<"Value of A is "<<a<<endl;
        }
 
        Number(int n)
        {
            a = n;
        }

        operator int()
        {
            return a;
        }
};

int main()
{
    Number num = 100;
    
    int n = num;

    cout<<"The Value of N is "<<n<<endl;

    return 0;
}

*/

/*   <-------------------------------------------------------------------------------------->  */

#include<iostream>

using namespace std;

class Time
{
    int hrs;
    float min;

    public:
        Time(int t)
        {
            hrs = t/60;
            min = t%60;
        }

        operator int()
        {
            return hrs;
        }

        operator float()
        {
            return min;
        }
};

int main()
{
    Time T = 75;
    
    int hrs = T;
    float min = T;

    cout<<"Hours = "<<hrs<<endl;
    cout<<"Minutes = "<<min<<endl;

    return 0;
}
