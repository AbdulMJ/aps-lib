/*
Name: Abdul Majid Mujahid
Sec: C
Roll: 324
USN: 01FE20BCS147
*/

#include<stdio.h>
#include<stdlib.h>
#define max 20

typedef struct queue
{
    int a[max];
    int f,r;
}*QUEUE;

int enqueue(QUEUE x,int n);
void dequeue(QUEUE x);
void display(QUEUE x);

int enqueue(QUEUE x, int n)
{
    if(x->r==max-1)
    {
        printf("\n\nQueue is full\n\n");
        return 0;
    }
    x->r=x->r+1;
    x->a[x->r]=n;
    return 1;
}


void dequeue(QUEUE x)
{
    int i;
    if(x->r<x->f)
    {
        printf("Queue is empty, try entering elements in the queue before dequeuing\n");
        return;
    }
    i=x->a[x->f];
    x->f=x->f+1;
    printf("\nDequeue successful, dequeued element is %d\n",i);
}

void display(QUEUE x)
{
    int i,j;
    i=x->f;
    j=x->r;
    if(x->r<x->f)
    {
        printf("\nQueue is empty\n");
        return;
    }
    printf("\nThe elements in the queue are:\n\n");
    for(i;i<=j;i++)
    {
        printf("%d\n",x->a[i]);
    }
    printf("\n");
}

int main()
{
    QUEUE x=(QUEUE)malloc(sizeof(QUEUE));
    x->f=0;
    x->r=-1;
    int i;

    int n,c;
    do
    {
        printf("Enter your choice\n");
        printf("1.Enqueue\n");
        printf("2.Dequeue\n");
        printf("3.Display\n");
        printf("0.Exit\n");
        scanf("%d",&c);

        switch(c)
        {
        case 1:
            printf("Enter the number to insert in queue\n");
            scanf("%d",&n);
            i=enqueue(x,n);
            if(i==0)
                printf("Enqueue unsuccessful\n\n");
            if(i==1)
                printf("Enqueue successful\n\n");
            break;
        case 2:
            dequeue(x);
            break;
        case 3:
            display(x);
            break;
        default:
            exit(0);
        }
    }while(1);

    return 0;
}
