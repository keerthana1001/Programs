#include<stdio.h>
void enqueue();
void dequeue();
void display();
int front=0,rear=0,size,arr[100];
int main()
{
    printf("Enter the size:");
    scanf("%d",&size);
    int ch=0;
    while(ch!=4)
    {
    printf("\n1.Enqueue\n2.Dequeue\n3.Show\n4.Exit\nEnter the choice:");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1: enqueue();
                break;
        case 2: dequeue();
                break;
        case 3: display();
                break;
        case 4: printf("\nExiting...");
                break;
        default: printf("\nEnter a valid choice");
    }
    }
    
}
void enqueue()
{
    int val;
    if(rear>=size)
    {
        printf("\nOverflow");
    }
    else
    {
        printf("\nEnter the value:")
        scanf("%d",&val);
        arr[rear]=val;
        rear++;
    }
}
void dequeue()
{
    if(front>=rear)
    {
        printf("\nUnderflow");
    }
    else
    {
        printf("Item deleted: %d",arr[front]);
        front++;
    }
}
void display()
{
    for(int i=front;i<rear;i++)
    {
        printf("%d ",arr[i]);
    }
}
