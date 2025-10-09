/*Write a program that sort the element of linked list any sorting technique.*/

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
struct node *sorted(struct node*head)
{
    struct node *i,*j;
    int t;
    for(i=head;i!=NULL;i=i->next)
    {
        for(j=head;j!=i;j=j->next)
        {
            if(j->data>i->data)
            {
                t=j->data;
                j->data=i->data;
                i->data=t;
            }
        }
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
    struct node *head;
    head=create(NULL);
    printf("\nsorted linkedlist:");
    head=sorted(head);
    disp(head);
}
