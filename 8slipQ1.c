/*. Implement singly linked list of integer with the operations create, delete 
specific element and display. Write a menu driven program to call these 
operations*/

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
struct node *delete(struct node *head,int pos)
{
    struct node *temp,*temp1;
    int i;
    if(pos==1)
    {
        temp=head;
        head=head->next;
        free(temp);

    }
    else
    {
        for(i=1,temp=head;i<pos-1&&temp->next!=NULL;i++,temp=temp->next);
        temp1=temp->next;
        temp->next=temp1->next;
        free(temp1);
    }
       return head;
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
    int pos;
    struct node *head;
    head=create(NULL);
    printf("enter pos:");
    scanf("%d",&pos);
    head=delete(head,pos);
    disp(head);
}