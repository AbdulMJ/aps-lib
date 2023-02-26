#include <iostream>
#include<vector>
#include<cmath>
using namespace std;

int main() {
    int n=0,temp=0,max=0;
    // vector<vector<int>> dp;
    // vector <int> a;

    cout<<"Enter num of elements in array: ";
    cin>>n;
    int a[n];
    cout<<"Enter elements of array: ";
    for (int i = 0; i < n; i++)
    {
        cin>>temp;
        // max=max+temp;
        a[i]=temp;
    }

    cout<<"Subset sum to find: ";
    cin>>max;
    int dp[n+1][max+1];

    for (int i = 0; i < max+1; i++)
        dp[0][i]=0;

    for (int i = 0; i < n+1; i++)
        dp[i][0]=1;

    for (int i = 1; i < n+1; i++)
    {
        for (int k = 1; k < max+1; k++)
        {
            // cout<<dp[i][k]<<" ";
            if(dp[i-1][k]==1)
                dp[i][k]=1;
            else
            {
                if(a[i-1]>k)
                    dp[i][k]=0;
                else
                    dp[i][k]=dp[i-1][k-a[i-1]];
            }
        }
        // cout<<endl;
    }
    
    for (int i = 0; i < n+1; i++)
    {
        for (int k = 0; k < max+1; k++)
        {
            cout<<dp[i][k]<<" ";
        }
        cout<<endl;
    }
    // a.clear();
    return 0;
}