#include<iostream>
#include<algorithm>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,x;
    cin>>n>>x;
    int a[n],b[n];
    
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
        b[i]=a[i]+x;
    }
    if (x==0)
    {
        cout<<"Yes\n";
        return 0;
    }
    vector<int> v(n+ n);
    vector<int>::iterator it, st;
    it = set_intersection(a, a + n,
                          b, b + n,
                          v.begin());

    int cnt=0;
    for (st = v.begin(); st != it; ++st)
        cnt++;
    if(cnt!=0)
        cout<<"Yes\n";
    else
        cout<<"No\n";
    return 0;
}