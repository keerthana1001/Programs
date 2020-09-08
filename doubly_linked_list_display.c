#include <stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node *next,*prev;
};
void append(struct Node **,int);
void display(struct Node *);
int main()
{
    struct Node *head=NULL;
    int data;
    do{
        scanf("%d",&data);
        if(data>0)
        append(&head,data);
    }while(data>0);
    display(head);
    return 0;
}
void append(struct Node **headadd,int data)
{
    struct Node *temp,*newnode;
    temp=*headadd;
    newnode=(struct Node *)malloc(sizeof(struct Node));
    newnode->data=data;
    newnode->next=NULL;
    newnode->prev=NULL;
    if(*headadd==NULL)
    *headadd=newnode;
    else
    {
        while(temp->next!=NULL)
        temp=temp->next;
        temp->next=newnode;
        newnode->prev=temp;
    }
}
void display(struct Node *head)
{
    while(head!=NULL)
    {
        printf("%d ",head->data);
        head=head->next;
    }
}
