/*Sort a random array of n integers (accept the value of n from user) in 
ascending order by using quick sort algorithm. */

#include<stdio.h>

void swap(int *a,int *b)
{
    int temp=*a;
        *a=*b;
        *b=temp;
}

int partition(int arr[],int low,int high)
{
    int i=low-1,pivot=arr[high],j;
    for(j=low;j<high;j++)
    {
        if(arr[j]<pivot)
        {
            i++;
            swap(&arr[i],&arr[j]);
        }
    }
    swap(&arr[i+1],&arr[high]);
    return i+1;
}

void quicksort(int arr[],int low,int high)
{
    if(low<high)
    {
        int pi=partition(arr,low,high);

        quicksort(arr,low,pi-1);
        quicksort(arr,pi+1,high);
    }
}
int main()
{
    int n,i,arr[100];
    printf("enter limit:");
    scanf("%d",&n);

    
    for(i=0;i<n;i++)
    {
        arr[i]=rand()%50;
    }
    printf("\nrandom array:");
    for(i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }
    quicksort(arr,0,n-1);
    printf("\nsorted array: ");
    for(i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }
    printf("\n");
}
