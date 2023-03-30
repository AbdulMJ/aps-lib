/*
Name: Abdul Majid Mujahid
Sec: C
Roll: 324
USN: 01FE20BCS147
*/

#include<stdio.h>
#include<stdlib.h>
#define max 20

typedef struct stack
{
    int top;
    int a[max];
}*STACK;


void push(STACK x,int n);
void pop(STACK x);
void peek(STACK x);
void display(STACK x);


void push(STACK x,int n)
{
    if(x->top==max-1)
    {
        printf("Stack is full can't push\n");
        return;
    }
    x->top++;
    x->a[x->top]=n;
    printf("%d successfully pushed into the stack\n",n);
}


void pop(STACK x)
{
    int i=x->top;
    if(x->top==-1)
    {
        printf("Stack is already empty can't pop\n");
        return;
    }
    x->top--;
    printf("%d successfully popped from the stack\n",x->a[i]);
}


void peek(STACK x)
{
    int i;
    if(x->top==-1)
    {
        printf("No elements in stack, try entering elements before using peek\n");
    }
    else
    {
        i=x->a[x->top];
        printf("The number on top of the stack is %d\n",i);
    }
}


void display(STACK x)
{
    int i;
    if(x->top==-1)
    {
        printf("Stack is empty\n");
        return;
    }
    printf("\nThe stack has the following elements:\n");
    for(i=0;i<=x->top;i++)
    {
        printf("%d\n",x->a[i]);
    }
    printf("\n\n");
}

int main()
{
    STACK x=(STACK)malloc(sizeof(STACK));
    x->top=-1;

    int n,c;
    do
    {
        printf("Enter your choice\n");
        printf("1.Push\n");
        printf("2.Pop\n");
        printf("3.Peek\n");
        printf("4.Display\n");
        printf("0.Exit\n");
        scanf("%d",&c);

        switch(c)
        {
        case 1:
            printf("Enter the number to push\n");
            scanf("%d",&n);
            push(x,n);
            break;
        case 2:
            pop(x);
            break;
        case 3:
            peek(x);
            break;
        case 4:
            display(x);
            break;
        default:
            exit(0);
        }

    }while(1);

    return 0;
}
