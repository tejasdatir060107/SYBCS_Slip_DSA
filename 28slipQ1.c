/*Create a random array of n integers. Accept a value x from user and use 
binary search algorithm to check whether the number is present in the array or 
not and output the position if the number is present.*/

#include<stdlib.h>
#include<stdio.h>
int main()
{
    int a[100],i,j,t,n,x,flag=0,top,bottom,mid;
    printf("enter limit:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
		a[i]=rand()%1000;
    }
    printf("unsorted array:");    
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    
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
    printf("\nsorted array:");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    
    printf("\nenter number to search:");
    scanf("%d",&x);

    bottom=n-1;
    top=0;

    while(top<=bottom)
    {
        mid=(top+bottom)/2;
        if(a[mid]==x)
        {
            flag=1;
            break;
        }
        else
        if(x>a[mid])
        {
            top=mid+1;
        }
        else
        {
            bottom=mid-1;
        }
    }
    if(flag==0)
    {
        printf("not found..");
    }
    else
    {
    	printf("found. found at %d position:",mid+1);
	}
    
}
