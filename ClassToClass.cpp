/*

// Below is class to class type conversion via constructor...

#include<iostream>

using namespace std;

class Rectangle;

class Triangle
{
    int height,base;
    float area;

    public:
        Triangle(int h,int b)
        {
            height = h;
            base = b;

            area = 0.5*height*base;
        }

        void display()
        {
            cout<<"Area of Triangle having base = "<<base<<" and Height = "<<height<<" is "<<area<<endl;
        }

        friend Rectangle;
};

class Rectangle
{
    int length,breadth;
    float area;

    public:
        Rectangle(Triangle t)
        {
            length = t.height;
            breadth = t.base;

            area = length * breadth;
        }

        void display()
        {
            cout<<"Area of Rectangle having length = "<<length<<" and breadth = "<<breadth<<" is "<<area<<endl;
        }
};

int main()
{
    Triangle T1(10,20);
    T1.display();

    Rectangle R1 = T1;
    R1.display();
    
    return 0;
}


*/







// Below is class to class via casting operator....


#include<iostream>

using namespace std;

class Rectangle
{
    int length,breadth;
    float area;

    public:
        Rectangle(int l,int b)
        {
            length = l;
            breadth = b;

            area = length * breadth;
        }
        
        void display()
        {
            cout<<"Area of Rectangle having length = "<<length<<" and breadth = "<<breadth<<" is "<<area<<endl;
        }
};

class Triangle
{
    int height,base;
    float area;

    public:
        Triangle(int h,int b)
        {
            height = h;
            base = b;

            area = 0.5*height*base;
        }

        void display()
        {
            cout<<"Area of Triangle having base = "<<base<<" and Height = "<<height<<" is "<<area<<endl;
        }

        operator Rectangle()
        {
            Rectangle temp(base,height);

            return temp;
        }
};



int main()
{
    Triangle T1(10,20);
    T1.display();

    Rectangle R1 = T1;
    R1.display();
    
    return 0;
}



