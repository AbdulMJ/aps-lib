#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
using namespace std;

class Solution {
public:
    int maximumCostSubstring(string s, string chars, vector<int>& vals) {
        map <char,int> mg;
        map <char,int> ::iterator it;
        for(int i=97;i<97+26;i++)
        {
            mg[char(i)]=i-96;
        }
        for(int i=0;i<chars.size();i++)
        {
            mg[chars[i]]=vals[i];
        }
        int a[s.size()];
        for(int i=0;i<s.size();i++)
        {
            a[i]=mg[s[i]];
        }
        int n=sizeof(a)/sizeof(int);
        int sum=0,maxsum=a[0];
        for(int i=0;i<n;i++)
        {
            sum+=a[i];
            maxsum = max(sum,maxsum);
            if(sum<0)
                sum=0;
        }
        if(maxsum>-1)
            return maxsum;
        else
            return 0;
    }
};