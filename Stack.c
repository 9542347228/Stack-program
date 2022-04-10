
#include <stdio.h>
#include<stdlib.h>
#define n 5

int top=-1;
int stack[n];

int push();
int pop();
int display();
int count();
int peek();

int main()
{
    printf("\n            PROGRAM FOR STACK IMPLEMENTATION\n");
    while(1)
    {
        int a;
        
        printf("\nEnter The Operation\a\n\n");
        printf("1.PUSH\n");
        printf("2.POP\n");
        printf("3.DISPLAY\n");
        printf("4.COUNT\n");
        printf("5.PEEK\n");     // Display the top most element in STACK
        printf("6.EXIT\n");
        printf("Choose an Operation:- ");
        scanf("%d",&a);
        
        switch(a)
        {
            case 1:{
                push();
                break;
            }
            case 2:{
                pop();
                break;
            }
            case 3:{
                display();
                break;
            }
            case 4:{
                count();
                break;
            }
            case 5:{
                peek();
                break;
            }
            case 6:{
                printf("\n    PROGRAM SUCCESSFULL\n");
                exit(0);
            }
            default:{
                printf(" Invalid choice...! choose again\n");
            }
        }
    }
    return 0;
}

int push()
{
    int x;
    printf(" Enter the value to PUSH in stack \n");
    scanf("%d",&x);
    if(top == n-1)
    {
        printf(" Stack is FULL\n");
    }
    else
    {
        top++;
        stack[top] = x;
        printf(" %d Inserted Sucessfully in Stack\n\a",x);
    }
    return 0;
}

int pop()
{
    int y;
    if(top == -1)
    {
        printf(" Stack is Empty!\n");
    }
    else
    {
        y= stack[top];
        top--;
        printf(" %d Deleted Sucessfully\a\n",y);
    }
    return 0;
}

int display()
{
    int i;
    for(i=top;i>=0;i--)
    {
        printf("  |%d|\n",stack[i]);
    }
    return 0;
}

int count()
{
    int count;
   for(int i=0;i<=n;i++)
   {
       count++;
   }
   printf("\aThe elements in stack is:- %d",count);
   return 0;
}

int peek()
{
    printf("        PEEK\n");
    if(stack[top] == -1)
    {
        printf("STACK is EMPTY");
    }
    else
    {
        printf("The top most element in STACK is %d\a",stack[top]);
    }
}
