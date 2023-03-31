#include<iostream>
using namespace std;
#define ll long long
int main()
{
    ll n=0,cnt=1,m=1000000007;
    cin>>n;
    while(n)
    {
        cnt=(cnt<<1)%m;
        n--;
    }
    cout<<cnt<<"\n";

}