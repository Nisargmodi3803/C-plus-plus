#include<iostream>
#include<string>

using namespace std;

class CWH
{
    protected:
        string title;
        float rating;

    public:
        CWH(string s,float r)
        {
            title = s;
            rating = r;
        }

        virtual void display() = 0;
        {
            cout<<"Error!!! wrong display fuction is running..."<<endl;
        }
};

class videoContent : public CWH
{
    float videoLen;

    public:
        videoContent(string s,float r,float VL) : CWH(s,r)
        {
            videoLen = VL;
        } 

        void display()
        {
            cout<<"Video Course Name : "<<title<<endl;
            cout<<"Video Length : "<<videoLen<<" minute"<<endl;
            cout<<"Rating of Video Course : "<<rating<<" out of 5"<<endl<<endl;
        }
};

class wordContent : public CWH
{
    int words;

    public:
        wordContent(string s,float r,int w) : CWH(s,r)
        {
            words = w;
        }

        void display()
        {
            cout<<"Written course Name : "<<title<<endl;
            cout<<"Total words in this course : "<<words<<endl;
            cout<<"Rating of Written course : "<<rating<<" out of 5"<<endl<<endl;
        }
};

int main()
{
    string name;
    int w;
    float VL,r;


    //For Video Course...
    cout<<"Enter Video Course Name : ";
    getline(cin,name);

    cout<<"Enter Length of Video course : ";
    cin>>VL;

    cout<<"Enter Rating of video course out of 5 : ";
    cin>>r;

    videoContent vCourse (name,r,VL);

    cout<<endl;

    string name1;

    //For Written Course...
    cout<<"Enter written course name : ";
    cin>>name1;

    cout<<"Enter the Total words of this course : ";
    cin>>w;

    cout<<"Enter the rating of written course out of 5 : ";
    cin>>r;

    wordContent wCourse(name1,r,w);
    cout<<endl<<endl;

    CWH *tut[2];

    tut[0] = &vCourse;
    tut[1] = &wCourse;

    tut[0]->display();
    tut[1]->display();

    return 0;
}


