#include<iostream>
using namespace std;
#define ll long long

int main()
{
    ll t=0,a=0,b=0;
    cin>>t;
    while (t--)
    {
        cin>>a>>b;
        if (a==0 && b==0)
            cout<<"YES\n";
        else if((a+b)%3==0 && a!=0 && b!=0)
        {
            if(a<=2*b && b<=2*a)
                cout<<"YES\n";
            else
                cout<<"NO\n";
        }
        else
            cout<<"NO\n";
    }
    return 0;
}