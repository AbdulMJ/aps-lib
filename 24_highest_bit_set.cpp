#include<iostream>
using namespace std;

int main()
{
    int n,cnt=0;
    cout<<"Enter number of which you want the the highest bit set:\n";
    cin>>n;
    while(n)
    {
        n=n>>1;
        cnt++;
    }
    cnt--;
    if(cnt<0)
        cout<<"No bit is set\n";
    else
        cout<<"The highest bit set is:"<<cnt<<"th";
    return 0;
}