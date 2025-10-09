/* Read the ‘n’ numbers from user and sort using bubble sort.*/


#include<stdlib.h>
#include<stdio.h>
void bubblesort(int a[],int n)
{
    int pass,i,t;
    for(pass=0;pass<n;pass++)
    {
        for(i=0;i<n-pass-1;i++)
        {
            if(a[i]>a[i+1])
            {
                t=a[i];
                a[i]=a[i+1];
                a[i+1]=t;
            }
        }
    }
}
int main()
{
    int a[100],i,n;
    printf("enter limit:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        a[i]=rand()%100;
    }
    printf("\nrandom array:");
    for(i=0;i<n;i++)
    {
    	printf("%d\t",a[i]);
	}

    bubblesort(a,n);
    
    printf("\nsorted array:");
    for(i=0;i<n;i++)
    {
    	printf("%d\t",a[i]);
	}
}
