/*Create random array of n integer. Accept a value x from user and use 
linear search algorithm check the number present or not in array. */
#include<stdlib.h>
#include<stdio.h>
int main()
{
    int a[100],i,n,x,flag=0;
    printf("enter limit:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        a[i]=rand();
    }
    printf("random array:");
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
            flag=1;
            break;
        }
    }
    if(flag==1)
    {
        printf("number fount at %d position..",i+1);
    }
    else
    {
        printf("not found....");
    }

}
