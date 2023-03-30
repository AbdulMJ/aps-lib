#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int mn=0;
    int cn=0,sum=0;
    cin>>cn;
    int c[cn];
    for(int i=0;i<cn;i++)
    {
        cin>>c[i];
    }
    cout<<"SUM:";
    cin>>sum;
    if(sum==0)cout<<"0\n";return 0;
    
    int dp[sum];
    dp[0]=1;
    sort(c,c+cn);
    for (int i = 1; i < sum; i++)
    {
        for (int j = 0; j < cn; j++)
        {
            if(i-c[j]>0 && dp[i-c[j]])
            {
                
            }
        }
    }
    
}