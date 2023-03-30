#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define m 100

typedef struct queue
{
    int p[m];
    int f,r;
}*QUEUE;

void enqueue(QUEUE x, int n)
{
    x->r=x->r+1;
    x->p[x->r]=n;
    printf("\nEnqueue successful, enqueued element is %d\n",n);
}

void dequeue(QUEUE x,int n)
{
    int i;
    i=x->p[x->f];
    x->f=x->f+1;
    printf("\nDequeue successful, dequeued element is %d\n",i);
}


void enqueue(QUEUE x, int n);
void dequeue(QUEUE x,int n);
void fun(int a[m][m],int n);
void display(int a[m][m], int n);
void fun2(QUEUE x, int n, int stat[m],int a[m][m]);


void fun(int a[m][m],int n)
{
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i==j)
                a[i][j]=1;
            else
                a[i][j]=0;
        }
    }
}


void fun2(QUEUE x,int n,int stat[m],int a[m][m])
{
    int i=0,j=0;
    for(i=0;i<n;i++)
    {
        for(j=0;i<n;i++)
        {
            if(x->r<x->f)
            {
                if(a[i][j]==1&&stat[i]<=1)
                {
                    enqueue(x,i);
                    stat[i]=2;
                }
            }
            dequeue(x,i);
            stat[i]=3;
            if()
        }
    }
}



void display(int a[m][m], int n)
{
    int i,j;
    printf("The adjacency matrix is\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int n,c,i,j,e,k,z,a[m][m];
    QUEUE x=(QUEUE)malloc(sizeof(QUEUE));
    x->f=0;
    x->r=-1;
    printf("Enter the number of nodes\n");
    scanf("%d",&n);
    if(n<=1)
    {
        printf("Invalid input\n");
        exit(0);
    }
    k=n*(n-1)/2;
    fun(a,n);

    int stat[n-1]; //status initialization

    for(i=0;i<n;i++)  //status initialization
        stat[i]=1;



    //matrix initialization
    {
        printf("\nSelect choice\n");
        printf("1.Enter the number of edges\n");
        printf("2.No more input/Display\n");
        printf("3.End program\n");
        scanf("%d",&c);
        switch(c)
        {
        case 1:
            scanf("%d",&e);
            if(e==0)
            {
                display(a,n);
                exit(0);
            }
            else if(e<0||e>k)
            {
                printf("INVALID INPUT!!!!!\n");
                exit(0);
            }
            printf("Enter the pairs connected\n");
            for(z=0;z<e;z++)
            {
                scanf("%d%d",&i,&j);
                a[i-1][j-1]=1;
                a[j-1][i-1]=1;
            }
            break;
        case 2:
            display(a,n);
            break;
        case 3:
            exit(0);
            break;
        }

    }
    //matrix completion


    fun2(x,n,stat,a);

    return 0;
}
