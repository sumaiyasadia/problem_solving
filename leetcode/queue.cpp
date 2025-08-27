#include<stdio.h>
int q[10];
int head=-1,tail=-1;
void inqueue(int x)
{ if(head==10-1)
{
    printf("Queue is overflow\n");
}
    tail++;
    q[ tail]=x;
    printf("Queue is %d\n",q[tail]);
}
void dequeue()
{
    if(head==tail)
    {
        printf("Queue is empty\n");
    }
    head++;
    printf("Queue is %d\n",q[head]);

}
void peek()
{
    if(head==10-1)
{
    printf("Queue is overflow\n");
}

printf("peek is %d\n",q[tail]);
}
isEmpty()
{
    if(head==tail)
    {
        printf("Queue is empty\n");
    }
}
void isFull()
{
      if(head==10-1)
{
    printf("Queue is full\n");
}
}
int main()
{
    inqueue(10);
    inqueue(20);
    peek();
    dequeue();
}
