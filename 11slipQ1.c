/*Write program for concatencation of linked list. */

#include<stdio.h>
#include<stdlib.h>
struct node 
{
    int data;
    struct node *next;
};
struct node *create(struct node *head1)
{
    struct node *newnode,*temp;
    int i,n;

    printf("enter limit:");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("enter value:");
        scanf("%d",&newnode->data);
        newnode->next=NULL;

        if(head1==NULL)
        {
            head1=newnode;
            temp=newnode;
        }
        else
        {
            temp->next=newnode;
            temp=newnode;
        }
    }
    return head1;
}
struct node *create1(struct node *head2)
{
    struct node *newnode,*temp;
    int i,n;

    printf("enter limit:");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("enter value:");
        scanf("%d",&newnode->data);
        newnode->next=NULL;

        if(head2==NULL)
        {
            head2=newnode;
            temp=newnode;
        }
        else
        {
            temp->next=newnode;
            temp=newnode;
        }
    }
    return head2;
}
struct node * concate(struct node *head1,struct node *head2)
{
    struct node *temp;
    for(temp=head1;temp->next!=NULL;temp=temp->next);
    temp->next=head2;
    return head1;
}   
void disp(struct node *head)
{
    struct node *temp;
    for(temp=head;temp!=NULL;temp=temp->next)
    {
        printf("%d\t",temp->data);
    }
}
int main()
{
    struct node *head1,*head2,*head;
    head1=create(NULL);
    head2=create1(NULL);
    head=concate(head1,head2);
    disp(head);
}



