#include<iostream>
#include<map>
#include<string>
#include<algorithm>
using namespace std;
#define ll long long

int main()
{
    string s;
    cin>>s;
    map <char,int> mg;
    map <char,int> ::iterator it;
    for (int i = 0; i < s.size(); i++)
    {
        mg[s[i]]++;
    }

    int cnt=0;   
    for (it=mg.begin(); it !=mg.end(); it++)
    {
        // cout<<it->first<<" "<<it->second<<"\n";
        if(it->second%2!=0)
            cnt++;
        if(cnt>1)
            break;
    }
    if (cnt>1)
    {
        cout<<"NO SOLUTION\n";
    }
    else
    {
        string st,ed,mid;
        for (it=mg.begin(); it !=mg.end(); it++)
        {
            if (it->second%2!=0)
            {
                mid.push_back(it->first);
                if (it->second>1)
                {
                    int tmp=it->second-1;
                    for (int i = 0; i < tmp/2; i++)
                    {
                        st.push_back(it->first);
                        ed.push_back(it->first);
                    }
                    
                }
            }
            else
            {
                int tmp=it->second;
                for (int i = 0; i < tmp/2; i++)
                {
                    st.push_back(it->first);
                    ed.push_back(it->first);
                }
            }
        }
        st.append(mid);
        reverse(ed.begin(),ed.end());
        st.append(ed);
        cout<<st<<"\n";
    }
    
    return 0;
}