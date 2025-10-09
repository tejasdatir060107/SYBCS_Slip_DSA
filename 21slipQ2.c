/*Write a program for selection sort algorithm accept n from user and 
perform selection sort. */

#include<stdlib.h>
#include<stdio.h>
void selectionsort(int a[],int n)
{
  int i,j,min,t;
    for(i=0;i<n;i++)
    {
      min=i;
      for(j=i+1;j<n;j++)
      {
        if(a[j]<a[min])
        {
            min=j;
        }
      }
      t=a[i];
      a[i]=a[min];
      a[min]=t;
  }
}
int main()
{
    int a[100],pass,j,i,n,t,min;
    printf("enter limit:");
    scanf("%d",&n);
    printf("enter element in array:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\nunsoted array:");
    for(i=0;i<n;i++)
    {
    	printf("%d\t",a[i]);
	  }
    selectionsort(a,n);
  
    printf("\nsorted array:");
    for(i=0;i<n;i++)
    {
    	printf("%d\t",a[i]);
	}
}
