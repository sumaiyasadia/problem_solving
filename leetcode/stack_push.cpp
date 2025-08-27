#include<stdio.h>
int a[10];
int top=-1;
void push(int x)
{
    if(top==10-1)
    {
        printf("stack is overflow");
    }
    top++;
    a[top]=x;

    printf("push is %d\n",a[top]);
}
void pop()
{
    if(top==-1)
    {
         printf("stack is underflow");
         return;
    }
    top--;
    printf("pop is %d\n",a[top]);
}
void peek()
{
    if(top==-1)
    {
         printf("stack is empty");
         return;
    }
    printf("peek element %d\n",a[top]);
}
void isFull()
{
    if(top==10-1)
    {
        printf("Stack is full\n");
    }
}
void isEmpty()
{
    if(top==-1)
    {
         printf("stack is empty");
    }
}
void stack_size()
{
    if(top == -1 && top==10-1)
    {
         printf("There are no size\n");
    }
    printf("%d\n",top+1);
}
int main()
{
push(30);
push(60);
push(80);
stack_size();
peek();
pop();
pop();

//pop();
//pop();
isEmpty();
}
