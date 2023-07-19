#include<iostream>

using namespace std;

class matrix
{
    int m[3][3];

    public:
        void getMatrix();
        void displayMatrix();

        friend matrix Transpose(matrix);
};

int main()
{
    matrix m1,m2;

    m1.getMatrix();
    cout<<endl;

    cout<<"Matrix M is"<<endl;
    m1.displayMatrix();

    cout<<endl;

    cout<<"Tranpose of Matrix M is"<<endl;
    m2 = Transpose(m1);
    m2.displayMatrix();

    return 0;
}

void matrix :: getMatrix()
{
    cout<<"Enter 3X3 Matrix"<<endl;
    
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<"M["<<i+1<<"]["<<j+1<<"] : ";
            cin>>m[i][j];
        }
    }
}

void matrix :: displayMatrix()
{
    {
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                cout<<m[i][j]<<"\t";
            }
            cout<<endl;
        }
    }
}

matrix Transpose(matrix m1)
{
    matrix m2;

    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            m2.m[i][j] = m1.m[j][i];
        }
    }

    return m2;
}