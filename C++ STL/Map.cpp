#include<bits/stdc++.h>
#include<map>

using namespace std;

void print(map<int,string> m)
{
    map<int,string>::iterator it;
    for(it=m.begin();it!=m.end();it++)
    {
        cout<<it->first<<"-->"<<it->second<<endl;
    }cout<<endl;
}
int main()
{
    map<int,string> student;

    //Simple index and value insertion...
    student[1] = "Nisarg";
    student[2] = "Nilesh";
    student[10] = "Kajal";
    student[50] = "Astha";

    for(auto i : student)
        cout<<i.first<<"-->"<<i.second<<endl;
    cout<<endl;

    //clearing the map...
    student.clear();
    for(auto i : student)
        cout<<i.first<<"-->"<<i.second<<endl;
    cout<<endl;

    //Insertion using insert method & Printing using iterator...
    student.insert(pair<int,string>(1,"Nisarg"));
    student.insert(pair<int,string>(2,"Nilesh"));
    student.insert(pair<int,string>(12,"Kajal"));
    student.insert(pair<int,string>(55,"Astha"));

    //printing using iterator...
   print(student);

    cout<<"Size of map : "<<student.size()<<endl;

    //Delete upto key value 12...
    student.erase(student.begin(),student.find(12));
    print(student);
    
    //Delete key 55...
    student.erase(55);
    print(student);

    //Key present in the map...
    cout<<"Key 55 present or not : "<<student.count(55)<<endl;
    cout<<"Key 12 present or not : "<<student.count(12)<<endl;

    return 0;
}