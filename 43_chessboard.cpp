#include<iostream>
#include<string>
using namespace std;

int main()
{
    char a[9][9];
    int x=0,y=0;
    for (int i = 8; i >0; i--)
    {
        for (int j = 8; j>0; j--)
        {
            cin>>a[i][j];
            if(a[i][j]=='*')
            {
                x=i;
                y=j;
            }
        }
    }
    int alp=105;
    cout<<char(alp-y)<<x;
}