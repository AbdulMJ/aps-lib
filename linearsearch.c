#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int linsearch(int a[], int x,int l);

int linsearch(int a[], int x,int l)
{
    if(a[l]==x)
        return l;
    if(l<0)
        return -1;
    l=l-1;
    l=linsearch(a,x,l);
    return l;
}

int main()
{
    int a[50],n,i=0,x,p,l=0;
    printf("Enter the number of positions in array\n");
    scanf("%d",&n);
    printf("Enter the number of elements in array\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        l++;
    }
    l=l-1;
    printf("Enter the number you want to search in the array\n");
    scanf("%d",&x);
    p=linsearch(a,x,l);
    if(p==-1)
        printf("Element not found\n");
    else
        printf("Element is found on index - %d",p);
    return 0;
}
