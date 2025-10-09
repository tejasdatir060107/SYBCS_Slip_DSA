/*Sort a random array of n integers (accept the value of n from user)   
in ascending order by using insertion sort algorithm.*/


#include<stdlib.h>
#include<stdio.h>

void insertionsort(int a[],int n)
{
    int key,i,j,t;
    for(i=0;i<n;i++)
    {
        key=a[i];
        for(j=i-1;j>=0&&a[j]>key;j--)
        {
          t=a[j+1];
          a[j+1]=a[j];
          a[j]=t;
        
        }
        
    }
}
int main()
{
    int a[100],key,j,i,n,t;
    printf("enter limit:");
    scanf("%d",&n);
    printf("enter element:");
    for(i=0;i<n;i++)
    {
        a[i]=rand();
    }
    printf("\nrandom array:");
    for(i=0;i<n;i++)
    {
    	printf("%d\t",a[i]);
	}

    insertionsort(a,n);
    
    printf("\nsorted array:");
    for(i=0;i<n;i++)
    {
    	printf("%d\t",a[i]);
	}
}
