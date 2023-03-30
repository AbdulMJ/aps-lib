#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void bubsort(int a[],int n)
{
    int i,j,x;
    for(i=0;i<n;i++) //min n-1
    {
        for(j=0;j<i;j++) //min n-i-1
        {
            if(a[i]<a[j])
            {
                x=a[j];
                a[j]=a[i];
                a[i]=x;
            }
        }
    }
}

int binser(int a[],int n,int x,int i)
{
    if(i/2<=0||i>n)
        return -1;
    i=n/2;
    if(a[i]>x)
        binser(a,n/2,x);
}

int main()
{
    int a[50],n,i,x;
    printf("Enter the number of positions in array\n");
    scanf("%d",&n);
    printf("Enter the number of elements in array\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    bubsort(a,n);
    printf("Enter the number you want to search in the array\n");
    scanf("%d",&x);
    i=n;
    x=binser(a,n,x,i);
    return 0;
}
