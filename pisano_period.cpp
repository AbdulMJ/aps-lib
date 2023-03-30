#include<iostream>
#include <algorithm>
#include<vector>
using namespace std;
//In number theory, the nth Pisano period, written as π(n), is the period with which the sequence of Fibonacci 
//numbers taken modulo n repeats
long long get_pisano_period(long long m)
{
    long long a = 0, b = 1, c = a + b;
    for (int i = 0; i < m * m; i++)
    {
        c = (a + b) % m;
        a = b;
        b = c;
        if (a == 0 && b == 1)
        {
            return i + 1;
        }
    }
    return 0;
}

int main()
{
    unsigned long long m=10000007;
    long long ans;
    ans=get_pisano_period(m);
    cout<<ans<<"\n";
    return 0;
}