/* accept n from user and perform merge sort algorithm on this number and 
sort the element by using merge sort algorithm technique. */

#include<stdio.h>

void merge(int a[],int left,int mid,int right)
{
    int i=left;
    int j=mid+1;
    int k=0;
    int t[right-left+1];

    while(i<=mid&&j<=right)
    {
        if(a[i]<a[j])
        {
            t[k++]=a[i++];
        }
        else
        {
            t[k++]=a[j++];
        }
    }
    while(i<=mid)
    {
        t[k++]=a[i++];
    }
    while(j<=right)
    {
        t[k++]=a[j++];
    }
    for(i=left,k=0;i<=right;i++,k++)
    {
        a[i]=t[k];
    }
}

void mergesort(int a[],int left,int right)
{
    if(left<right)
    {
        int mid=(right+left)/2;
        mergesort(a,left,mid);
        mergesort(a,mid+1,right);

        merge(a,left,mid,right);

    }
}
int main()
{
    int n,i,arr[100];
    printf("enter limit:");
    scanf("%d",&n);

    printf("\nenter element in array:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    mergesort(arr,0,n-1);
    printf("\nunsorted array: ");
    for(i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }
    
    printf("\nsorted array: ");
    for(i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }
    printf("\n");
}
