
#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next,*prev;
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
            newnode->prev=temp;
            temp=newnode;
        }
    }
    return head;
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
    int ch;
    struct node *head;
    do
    {
        printf("\nMENU\n1-CREATE\n2-DISPLAY\nENTER CHOICE:");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:head=create(NULL);
            break;
            case 2: disp(head);
            break;
            default:printf("invalid choice:");
        }
    }while(ch<3);
           
}
