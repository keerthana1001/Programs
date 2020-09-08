#include <stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
}*start=NULL;

void main()
{
    int n;
    struct node *new_node, *current;
    scanf("%d",&n);
    while(n>0)
    {
        new_node=(struct node*)malloc(sizeof(struct node));
        scanf("%d",&new_node->data);
        new_node->next=NULL;
        if(start==NULL)
        {
            start=new_node;
            current=new_node;
        }
        else
        {
            current->next=new_node;
            current=new_node;
        }
        n--;
    }
    new_node=start;
    while(new_node!=NULL)
    {
        printf("%d--->",new_node->data);
        new_node=new_node->next;
    }
    printf("NULL\n");
}
