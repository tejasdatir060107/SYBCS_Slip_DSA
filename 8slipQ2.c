/* Implement a list for singly linked list, concatenate it and display reverse 
linked list.*/
#include<stdlib.h>
#include<stdio.h>
struct node
{
    int data;
    struct node *next;
};
struct node * create(struct node *head1)
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

        if(head1==NULL)
        {
            head1=temp=newnode;
        }
        else
        {
            temp->next=newnode;
            temp=newnode;
        }
    }
    return head1;
}
struct node * create1(struct node *head2)
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

        if(head2==NULL)
        {
            head2=temp=newnode;
        }
        else
        {
            temp->next=newnode;
            temp=newnode;
        }
    }
    return head2;
}
 
struct node *concate(struct node*head1,struct node *head2)
{
    struct node *temp;
    for(temp=head1;temp->next!=NULL;temp=temp->next);
    temp->next=head2;
    return head1;
}

struct node *reverse(struct node * head)
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
    
    struct node *head1,*head2,*head;
    head1=create(NULL);
    head2=create1(NULL);
    head=concate(head1,head2);
    head=reverse(head);
    disp(head);
} 