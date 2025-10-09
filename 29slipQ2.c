/*Sort a random array of n integer (create random array of n integer) in 
ascending order by using counting sort alogorithm.*/

#include<stdlib.h>
#include<stdio.h>
int main()
{
    int a[100],*b,i,n,j,max;
    printf("enter limit:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        a[i]=rand()%1000;
    }
    printf("random array:");
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
    b=(int *)calloc(n,sizeof(int));
    for(i=0;i<=max;i++)
    {
        b[i]=0;
    }
    for(i=0;i<n;i++)
    {
        b[a[i]]++;
    }
    printf("\nsorted array:");
    for(i=0;i<=max;i++)
    {
        for(j=0;j<b[i];j++)
        {
            printf("%d\t",i);
        }
    }
}
