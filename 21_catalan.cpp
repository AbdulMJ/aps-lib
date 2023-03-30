#include <iostream>
using namespace std;

unsigned long int catalan(int n) {
    if (n <= 1)
        return 1;
    unsigned long int res = 0;
    int i;
    for (i=0; i<n; i++)
        res += catalan(i)*catalan(n-i-1);
    return res;
}

int main()
{
    int i, n;
    cout<<"Catalan numbers till:\n";
    cin>>n;
    for (i=0; i<n; i++)
        cout<<catalan(i)<<"\t";
    return 0;
}