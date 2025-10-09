/*Sort random array of n interger in ascending order by using Quick sor*/

#include<stdio.h>
#include<stdlib.h>
void swap(int *a,int *b)
{
    int temp=*a;
        *a=*b;
        *b=temp;
}

int partition(int a[],int low,int high)
{   
        int pivot=a[high];
        int i=low-1;
        int j;
        for(j=low;j<high;j++)
        {
            if(a[j]<pivot)
            {
                i++;
                swap(&a[i],&a[j]);
            }
        }
        swap(&a[i+1],&a[high]);
        return i+1;
}

void quicksort(int a[],int low,int high)
{
    if(low<high)
    {
        int pi=partition(a,low,high);

        quicksort(a,low,pi-1);
        quicksort(a,pi+1,high);
    }
}
int main()
{
    int a[100],n,i;
    printf("enter limit:");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        a[i]=rand()%100;
    }

    printf("random array:");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }

    quicksort(a,0,n-1);

    printf("array after sorted:");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
}