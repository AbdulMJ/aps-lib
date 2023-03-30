#include<iostream>
using namespace std;

int main()
{
    int n,cnt=-1,k=1;
    cout<<"Enter number of which you want the the first bit set:\n";
    cin>>n;
    while(n)
    {
        k=k&n;
        if(k==1)
        {
            cnt++;
            break;
        }
        n=n>>1;
        cnt++;
        k=1;
    }
    if(cnt<0)
        cout<<"No bit is set\n";
    else
        cout<<"The first bit set is:"<<cnt<<"th";
    return 0;
}