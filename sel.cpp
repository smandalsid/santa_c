#include<bits/stdc++.h>
using namespace std;

int main()
{
    int size;
    int winsize;
    cout<<"Size: ";
    cin>>size;
    cout<<"window size: ";
    cin>>winsize;
    int iters=0;
    int i;

    int pos=0;
    while(pos<size-winsize)
    {
        for(i=0;i<winsize;i++)
        {
            cout<<"Sent frame: "<<pos+1<<"\n";
            pos++;
        }
        int r;
        r=rand()%winsize+1;
        for(i=0;i<iters;i++)
        {
            r+=winsize;
        }
        iters++;
        // r = rand() % winsize + i+1;
        pos-=winsize;
        // cout<<"r: "<<r<<"\n";
        for (i=0;i<winsize;i++)
        {
            if(r!=pos+1)
            {
                cout<<"Acknowledgment for frame: "<<pos+1<<"\n";
            }
                pos++;
        }
        cout<<"Sent frame: "<<r<<"\n";
        cout<<"Acknowledgment for frame: "<<r<<"\n";
    }

    int count=0;
    while(pos<size)
    {
        cout<<"Sent frame: "<<pos+1<<"\n";
        count++;
        pos++;
    }
    pos-=count;
    while(pos<size)
    {
        cout<<"Acknowledgment for frame: "<<pos+1<<"\n";
        pos++;
    }

    return 0;
}