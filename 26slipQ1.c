/*Sort a random array of n integers (accept the value of n from user) in 
ascending order by using recursive Counting sort algorithm. */

#include <stdio.h>
#include <stdlib.h>

void sort(int a[],int n,int b[])
{
    if(n==0) return;
    b[a[n-1]]++;
    sort(a,n-1,b);
}

void printSorted(int b[],int i,int max)
{
    if(i>max) return;
    if(b[i]>0)
    {
        printf("%d\t",i);
        b[i]--;
        printSorted(b,i,max); 
    }
    else
    {
        printSorted(b,i+1,max); 
    }
}

int main()
{
    int a[100],*b,n,i,max;

    printf("Enter limit: ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        a[i]=rand()%100; 
	}
    printf("Random array: ");
    for(i=0;i<n;i++)
    {
	
		printf("%d\t",a[i]);
	}
    max=a[0];
    for(i=1;i<n;i++)
    {
        if(a[i]>max)
		{
			max=a[i];
		}
	}
    b=(int*)calloc(max+1,sizeof(int));
    sort(a,n,b);

    printf("\nSorted array: ");
    printSorted(b,0,max);
    free(b);
    
}
