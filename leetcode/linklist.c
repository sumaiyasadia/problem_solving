#include<stdio.h>

struct node
{
    int data;
   struct node *next= NULL;
};
int *head= NULL;
void insert (int n)
{
    node *new_node=new node;
    new_node->data=n;
    if(head==NULL)
    {
        head =new_node;
        return;
    }

}
int main()
{
    return 0;
}
