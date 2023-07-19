#include<iostream>
#include<cstring>

using namespace std;

int main()
{
    char *ptr[10]={"books","telivision","computers","sports"};

    char str[25];
    int i=0;

    cout<<"Enter your Favorite Leisure pursuit : ";
    cin>>str;

    for(i=0;i<4;i++)
    {
        if(strcmp(str,(*ptr+i)))
        {
            cout<<"your Favorite pursuit us available here"<<endl;
            break;
        }

    }

    if(i==4)
    {
        cout<<"your Favorite Choice is not available here"<<endl;
    }

    return 0;
}