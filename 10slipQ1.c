/*Sort a random array of n integers (accept the value of n from user) in 
ascending order by using insertion sort algorithm.*/ 

void insertion(int a[],int n)
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

#include<stdio.h>
int main()
{
    int a[100],key,i,j,t,n;
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
    
    insertion(a,n);
    printf("sorted array:");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);

    }

}
