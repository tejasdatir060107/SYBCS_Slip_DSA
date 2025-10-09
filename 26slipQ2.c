/*Sort a random array of n integer(accept value of n array from user) in 
ascending order by using bubble sort algorithm.  */
#include<stdlib.h>
#include<stdio.h>
void bubblesort(int a[],int n)
{
  int i,j,t;
    for(i=0;i<n;i++)
    {
      for(j=0;j<n-i-1;j++)
      {
        if(a[j]>a[j+1])
        {
          t=a[j];
          a[j]=a[j+1];
          a[j+1]=t;  
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
        a[i]=rand();
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
