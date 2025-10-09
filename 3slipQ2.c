/*Accept n value in array from user. Accept value x from user and use 
sentinal linear search algorithm to check number present or not*/

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
            a[n-1]=x;
            
            break;
        }
    }
    if(a[n-1]==x)
    {
        printf("number found at %d position..",i+1);
    }
    else
    {
        printf("not found....");
    }

}
