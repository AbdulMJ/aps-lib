#include<iostream>
using namespace std;

//to find max subarray sum
int main()
{
    int a[] = {5,2,-9,3,-5,7};
    int n=sizeof(a)/sizeof(int);
    int sum=0,maxsum=a[0];

    for(int i=0;i<n;i++)
    {
        sum+=a[i];
        maxsum = max(sum,maxsum);
        if(sum<0)
            sum=0;
    } 
    cout<<"Maxsum:"<<maxsum<<"\n";
    return 0;
}