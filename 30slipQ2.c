/*Q2  .Read the data from the file use selection sort algorithm.                     */ 

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    int i,n,j,min;
    FILE *fp;
    
    struct emp
    {
        char ename[20];
    }e1[20],t;

    fp=fopen("tejas5.txt","r");
    
    if(fp==NULL)
    {
        printf("file not found");
        
    }
    n=0;
    while(!feof(fp))
    {
        fscanf(fp,"%s",&e1[n].ename);
        n++;
    }
    fclose(fp);
    for(j=0;j<n-1;j++)
    {
        min=j;
        for(i=j+1;i<n;i++)
        {
            if(strcmp(e1[i].ename,e1[min].ename)<0)
            {
                min=i;
            }
        }
        t=e1[j];
        e1[j]=e1[min];
        e1[min]=t;
    }

    for(i=0;i<n;i++)
    {
        printf("%s\n",e1[i].ename);
    }
}

