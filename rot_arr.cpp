#include<iostream>
#include <algorithm>
#include<vector>
using namespace std;

int main()
{
    int a[10]={0,1,2,3,4,5,6,7,8,9};
    int k=0,i=0;
    cout<<"Rotate by how much:"<<endl;
    cin>>k;
    k=k%10;
    for (i = k; i < 10; i++)
        cout<<a[i]<<" ";

        
    if(k!=0)
    {
        for (int j = 0; j < k; j++)
            cout<<a[j]<<" ";
    }
    return 0;    
}