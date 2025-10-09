/*.Sort a random array of n integer in ascending order by using Merge sort algorithm.*/


#include<stdio.h>
void merge(int arr[],int left,int mid,int right)
{
    int i=left;
    int j=mid+1;
    int k=0;
    
    int temp[right-left+1];
    
    while(i<=mid&&j<=right)
    {
        if(arr[i]<=arr[j])
        {
            temp[k++]=arr[i++];
        }
        else
        {
            temp[k++]=arr[j++];
        }
    }
    while(i<=mid)
    {
        temp[k++]=arr[i++];
    }
    while(j<=right)
    {
        temp[k++]=arr[j++];
    }
    for(i=left,k=0;i<=right;i++,k++)
    {
        arr[i]=temp[k];
    }
}
void mergesort(int arr[],int left,int right)
{
    if(left<right)
    {
        int mid=(left+right)/2;

        mergesort(arr,left,mid);
        mergesort(arr,mid+1,right);

        merge(arr,left,mid,right);
    }
}



int main()
{
    int n,i,arr[100];
    printf("enter limit:");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        arr[i]=rand()%100;
    }
    
    printf("\nrandom array: ");
    for(i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }
    
    mergesort(arr,0,n-1);
    
	printf("\nsorted array: ");
    for(i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }
    printf("\n");
}
