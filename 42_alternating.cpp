#include<iostream>
#include<string>
using namespace std;

int main()
{
    int n;
    string s;
    cin>>n>>s;
    if(n==1)
        cout<<"Yes\n";
    else
    {
        for (int i = 1; i < s.size(); i++)
        {
            if(s[i]==s[i-1])
            {
                cout<<"No\n";
                return 0;
            }
        }
        cout<<"Yes\n";
        return 0;
    }
    return 0;
}