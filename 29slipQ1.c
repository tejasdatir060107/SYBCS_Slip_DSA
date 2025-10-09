/*Create a random array of n integers. Accept a value x from user and use 
sential search algorithm to check whether the number is present in the array or 
not and output the position if the number is present*/

#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a[100],i,n,x,flag=0;
	
	printf("enter limit:");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		a[i]=rand()%100;
	}
	
	printf("random number:");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
	
	printf("\nenter number to search:");
	scanf("%d",&x);
	
	for(i=0;i<n;i++)
	{
		if(a[i]==x)
		{
		
		a[n-1]=x;
		break;
		}
	}
	
	if(a[n-1]==x)
	{
		printf("number found on %d position..",i+1);
	}
	else
	printf("number not found");
}



