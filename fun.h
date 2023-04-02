#include<math.h>
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
using namespace std;

int num_bits_set(int n)
{
    int cnt=0;
    for (int i = 0; i < sizeof(int)*8; i++)
        if (n&(1<<i))
            cnt++;
    return cnt;
}

int min_not_minus(int a,int b)
{
    if (a<0)
        return b;
    else if(b<0)
        return a;
    else if(a<b)
        return a;
    else
        return b;
}

//Function to fill Array A with Random integers
void fillRandom(int A[],int n)
{
	int i;
	srand(time(NULL));
    
	for(i=0;i<n;i++)
	{
		A[i]=rand()%1000;
	}
}

//Function to Copy integers of Array B to Array A
void copy(int A[],int B[],int n)
{
	int i;

	for(i=0;i<n;i++)
	{
		A[i]=B[i];
	}
}


//Function to Print Array Elements
void printArray(int A[],int n)
{
	int i;
	printf("\nArray elements are:\n");
	for(i=0;i<n;i++)
	{
		printf("%d ",A[i]);
	}
    printf("\n");
}