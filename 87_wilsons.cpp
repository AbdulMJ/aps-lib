#include<iostream>
using namespace std;
#define ll long long

/*Wilson’s theorem states that a natural number p > 1 is a prime number if and only if
    (p - 1) ! ≡  -1   mod p     (OR)     (p - 1) ! ≡  (p-1) mod p
*/
int main()
{
    ll n;
    cin>>n;
    // to calculate (n-1)! mod n when n is prime
    cout<<n-1<<"\n";
}