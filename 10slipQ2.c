/*Sort the array using merge sort alogorithm*/

#include<stdio.h>

void merge(int a[],int left,int mid,int right)
{
    int i=left;
    int j=mid+1;
    int k=0;

    int temp[right-left+1];

    while(i<=mid&&j<=right)
    {
        if(a[i]<=a[j])
        {
            temp[k++]=a[i++];
        }
        else
        {
            temp[k++]=a[j++];
        }
    }
        while(i<=mid)
        {
            temp[k++]=a[i++];
        }
        while(j<=right)
        {
            temp[k++]=a[j++];
        }
        for(i=left,k=0;i<=right;i++,k++)
        {
            a[i]=temp[k];
        }
    }


void mergesort(int a[],int left,int right)
{
    if(left<right)
    {
        int mid=(left+right)/2;

        mergesort(a,left,mid);
        mergesort(a,mid+1,right);
   
        merge(a,left,mid,right);
    }
}

int main()
{
    int a[100],i,n;
    printf("enter limit:");
    scanf("%d",&n);

    
    printf("enter array:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    mergesort(a,0,n-1);
    
    printf("sorted array:");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);

    }

}
