/*

Create 2 classes :

1. SimpleCalculator - Takes input of 2 numbers using a utility function and perfoms +,-,*,/ and displays the results using another function.

2. Scientific Calculator - Takes input of 2 numbers using a utility function and perfoms any four scientific operation of your chioice and displays the results using another function.

Create another class HybridCalculator and inherit it using these 2 classes:

Q1. What type of Inheritance are you using?
Q2. Which mode of Inheritance are you using?
Q3. Create an object of HybridCalculator and display results of simple and scientific calculator.
Q4. How is code reusability implemented?

*/

#include<iostream>
#include<cmath>

using namespace std;

class Simple_Calculator
{
    protected:
        float n1,n2;

    public:
        void get_number();
        float Addition();
        float Subtraction();
        float multiplication();
        float Division();
        void display_simpleCalculator(int );
};

void Simple_Calculator :: get_number()
{
    cout<<"Enter the Number n1 for Simple Calculation : ";
    cin>>n1;

    cout<<"Enter the Number n2 for Simple Calculation : ";
    cin>>n2;
}

float Simple_Calculator :: Addition()
{
    return(n1+n2);
}

float Simple_Calculator :: Subtraction()
{
    return(n1-n2);
}

float Simple_Calculator :: multiplication()
{
    return(n1*n2);
}

float Simple_Calculator :: Division()
{
    return(1.0*n1 / n2);
}

void Simple_Calculator :: display_simpleCalculator(int n)
{
    cout<<"Answer By Simple Calculator.... "<<endl;

    switch(n)
    {
        case 1:
            cout<<"Addition of "<<n1<<" and "<<n2<<" is "<<Addition()<<endl;
            break;

        case 2:
            cout<<"Subtraction of "<<n1<<" and "<<n2<<" is "<<Subtraction()<<endl;
            break;

        case 3:
            cout<<"Multipliaction of "<<n1<<" and "<<n2<<" is "<<multiplication()<<endl;
            break;

        case 4:
            cout<<"Division of "<<n1<<" and "<<n2<<" is "<<Division()<<endl;
            break;

    }
}


class Scientific_Calculator
{
    protected:
        float n3;
        float a;

    public:
        void get_num();
        float sine();
        float cosine();
        float tangent();
        float square_root();
        void display_Scientific_Calculator(int );
};

void Scientific_Calculator :: get_num()
{
    cout<<"Enter the Number For Performing Scientific Calculation : ";
    cin>>n3;
}

float Scientific_Calculator :: sine()
{
    a = n3;
    return(sin(n3));
}

float Scientific_Calculator :: cosine()
{
    a = n3;
    return(cos(n3));
}

float Scientific_Calculator :: tangent()
{
    a = n3;
    return(tan(n3));
}

float Scientific_Calculator :: square_root()
{
    a = n3;
    return(sqrt(n3));
}

void Scientific_Calculator :: display_Scientific_Calculator(int n)
{
    cout<<"Answer By Scientific Calculator......"<<endl;

    switch(n)
    {
        case 1:
            cout<<"Sin(a) = "<<sine()<<endl;
            break;
    
        case 2:
            cout<<"cos(a) = "<<cosine()<<endl;
            break;
    
        case 3:
            cout<<"tan(a) = "<<tangent()<<endl;
            break;
    
        case 4:
            cout<<"SqureRoot of a is"<<square_root()<<endl;
            break;
    }
}


class Hybrid_Calculator : public Simple_Calculator, public Scientific_Calculator
{
    public:
        void display(int,int);
};

void Hybrid_Calculator :: display(int n1,int n2)
{
    display_simpleCalculator(n1);
    cout<<endl;

    display_Scientific_Calculator(n2);
    cout<<endl;
}

int main()
{   
    Hybrid_Calculator C1;

    cout<<"For Simple Calculator.........."<<endl<<endl;
    C1.get_number();
    cout<<endl;

    int n1;

    cout<<"Press 1 for Addition\nPress 2 for Subtraction\nPress 3 for Multiplication\nPress 4 for Division\nEnter Your Choice : ";
    cin>>n1;
    cout<<endl;

    // C1.display_simpleCalculator(n);

    Hybrid_Calculator C2;

    cout<<"\n\nFor Scientific Calculator........."<<endl<<endl;
    C2.get_num();
    cout<<endl;

    int n2;

    cout<<"Press 1 for Sine\nPress 2 for Cosine\nPress 3 for Tangent\nPress 4 for Square Root\nEnter Your Choice : ";
    cin>>n2;
    cout<<endl;

    // c2.display_Scientific_Calculator(n);


    C1.display(n1,n2);
    
    return 0;
}