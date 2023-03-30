#include <iostream>
#include<vector>
#include<cmath>
using namespace std;

int main() {
	int t,n,cnt=0;
	// vector <int> v1;
	cin >> t;    //Reading input from STDIN
	// cout << "Input number is " << num << endl;	// Writing output to STDOUT
	while(t--)
	{
		int sp=0,sum=0,m=-1;
		cin>>n;
		// sp=n;
		int a[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			if(m<a[i])
				m=a[i];
		}
		int p=pow(2,(log2(m)+1))-1;
        // cout<<"helllooscliasnhcliasnc"<<m<<endl;
		// int p=m;
		int xor_dp[n+1][p+1];
		int sum_dp[n+1][p+1];


		for (int i = 0; i < p+1; i++)
		{
			sum_dp[0][i]=0;
			xor_dp[0][i]=0;
		}
		for (int i = 0; i < n+1; i++)
		{
			sum_dp[i][0]=1;
			xor_dp[i][0]=1;
		}

		for(int i=1;i<n+1;i++)
			for(int k=1;k<p+1;k++)
			{
				if(xor_dp[i-1][k]==1)
                	xor_dp[i][k]=1;
				else
				{
					if((k^a[i-1])<p+1)
						xor_dp[i][k]=xor_dp[i-1][k^a[i-1]];
					else
						xor_dp[i][k]=0;
				}

				if(sum_dp[i-1][k]==1)
					sum_dp[i][k]=1;
				else
				{
					if(a[i-1]>k)
						sum_dp[i][k]=0;
					else
						sum_dp[i][k]=sum_dp[i-1][k-a[i-1]];
				}
			}
		for(int i=0;i<p+1;i++)
		{
			// for(int k=0;i)
			if((sum_dp[n][i]==xor_dp[n][i])&&(xor_dp[n][i]==1))
				cnt++;
		}
        cnt=cnt-1;
		cout<<cnt<<endl;
		cnt=0;
	}
}



/*
int solve(vector<int>&arr) {
    int n =arr.size();
    int ans = 0, num = 0, right = 0;
    for (int left = 0; left < n; left++) {
        while (right < n && num + arr[right] == (num ^ arr[right])) {
            num += arr[right];
            right++;
        }
        ans += right - left;
        if (left == right) {
            right++;
        } else {
            num -= arr[left];
        }
    }
    return ans;
}
*/