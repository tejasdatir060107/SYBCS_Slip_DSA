/*Q2. Write singly linked list program to search element in linked list.*/

#include<stdlib.h>
#include<stdio.h>
struct node
{
    int data;
    struct node *next;
};
struct node * create(struct node *head)
{
    int i,n;
    struct node *newnode,*temp;
    printf("enter limit:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("Enter value:");
        scanf("%d",&newnode->data);
        newnode->next=NULL;

        if(head==NULL)
        {
            head=temp=newnode;
        }
        else
        {
            temp->next=newnode;
            temp=newnode;
        }
    }
    return head;
}

struct node *search(struct node *head,int sea)
{
    int flag=0;
    struct node *temp;
    for(temp=head;temp!=NULL;temp=temp->next)
    {
        if(temp->data==sea)
        {
           flag=1;
           break;
        }
    }
    if(flag==1)
    {
        printf("found...");
    }
    else
    {
        printf("not found.....");
    }
    
}
void disp(struct node * head)
{
    struct node *temp;
    for(temp=head;temp!=NULL;temp=temp->next)
    {
        printf("%d\t",temp->data);
    }
}
int main()
{
    int sea;
    struct node *head;
    head=create(NULL);
    disp(head);
    printf("\nenter number to search:");
    scanf("%d",&sea);
    head=search(head,sea);
    
    
}
