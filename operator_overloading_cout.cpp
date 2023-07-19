#include<iostream>
#include<string>

using namespace std;

class op
{
    // public:
    string youtubeChannel;
    int subscribers;

    public:
        op(string channel,int subs)
        {
            youtubeChanel = channel;
            subscribers = subs;
        }

        void operator<<(ostrem& COUT ,op& a);
};

void operator<<(ostrem& COUT,op& a)
{
    COUT<<"YouTubeChannel : "<<a.youtubeChanel<<endl;
    COUT<<"Subscribes : "<<a.subscribers<<endl;
}

int main()
{
    op yt1 = yt1("CodeBeauty",75000);
    cout<<yt1;

    return 0;
}