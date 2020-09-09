#include<stdio.h>
int stack[100],choice,n,top,x,i;//declartions are made.An integer array with max size 100 is created 
void push();
void pop();
void display();
void main()
{
    //clrscr();
    top=-1; //top is initialized to -1 so that 1st element to be pushed can be stored in incremented value of top i.e. 0
    printf("\n Enter the size of STACK[MAX=100]:");
    scanf("%d",&n); //Size of the stack is obtained from user
    printf("\n\t 1.PUSH\n\t 2.POP\n\t 3.DISPLAY\n\t 4.EXIT");
    do
    {
        printf("\n Enter the Choice:");
        scanf("%d",&choice); //the choice takes it to the case which perofrms the operations
        switch(choice)
        {
        case 1:
        {            push();
            break;
        }
        case 2:
        {            pop();
            break;
        }
        case 3:
        {   display();
            break;
        }
        case 4:
        {   printf("\n\t EXIT POINT ");
            break;//exits loop
        }
        default:
   {    printf ("\n\t Please Enter a Valid Choice(1/2/3/4)"); //default case if values other than 1,2,3,4 are given
        }
        
        }
    }
    while(choice!=4);//loop executes till choice is not equal to 4,if it is 4,case 4 exits loop using break
}
void push()
{
    if(top>=n-1)//if condition is true then stack is full
    {
        printf("\n\tSTACK is over flow");
    }
    else
    {
        printf(" Enter a value to be pushed:");
        scanf("%d",&x);
        top++; //top is incremented
        stack[top]=x; //value is assigned to the array in stack
    }
}
void pop()
{
    if(top<=-1)//if condition is true then stack is empty
    {
        printf("\n\t Stack is under flow");
    }
    else
    {
        printf("\n\t The popped elements is %d",stack[top]);//element at  the top is displayed
        top--; //top is decremented, this leaves out the latest elemnt
    }
}
void display()
{
    if(top>=0)
    {        printf("\n The elements in STACK \n");
        for(i=top; i>=0; i--)
            printf("\n%d",stack[i]); //prints the array in reverse,from newest to oldest element
        printf("\n Press Next Choice");
    }
    else
    {        printf("\n The STACK is empty");    }}
