#include<iostream>

using namespace std;

template<class T>
class vector
{
    T arr[3];

    public:
        vector(T *a)
        {
            for(int i=0;i<3;i++)
            {
                arr[i] = a[i];
            }
        }

        void display()
        {
            for(int i=0;i<3;i++)
            {
                cout<<arr[i]<<" ";
            }
        }

        T operator*(vector v2)
        {
            int sum = 0;

            for(int i=0;i<3;i++)
            {
                sum+=this->arr[i] * v2.arr[i];
            }
            
            return sum;
        }

};

int main()
{
    float n[]={1.1,2.2,3.3};
    float m[]={4.4,5.5,6.6};

    vector <float> v1 = n;
    vector <float> v2 = m;

    cout<<"v1 = ";
    v1.display();
    cout<<endl;

    cout<<"v2 = ";
    v2.display();
    cout<<endl;

    int v = v1*v2;

    cout<<"v1Xv2 = "<<v<<endl;

    return 0;
}