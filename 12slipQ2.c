/*Implement list library for singly list list create list reverse it  and display 
reverse linked list.  */

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

struct node *reverse(struct node *head)
{
    struct node *temp=head,*prev=NULL,*next;
    while(temp!=NULL)
    {
        next=temp->next;
        temp->next=prev;
        prev=temp;
        temp=next;
    }
    return prev;
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
    struct node *head;
    head=create(NULL);
    head=reverse(head);
    
    disp(head);
}