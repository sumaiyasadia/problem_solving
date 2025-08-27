#include<iostream>
using namespace std;
struct node
{
int data;
node *next;

};
node *head=nullptr;
void insert(int n)
{
    node *new_node=new node;
    new_node->data=n;
    new_node->next=nullptr;
    if(head==nullptr)
    {
        head=new_node;
        return;
    }
    node *current=head;

    while(current->next!=nullptr)
    {
        current=current->next;

    }
    current->next=new_node;
}
void print_list()
{
    node *current=head;


    while (current != nullptr)
    {
        cout << current->data <<endl ;
        current = current->next;
    }

    cout << "NULL" << endl;
}
void insert_node(int value,int position)
{
    node *new_node=new node;
    new_node->data=value;
    if(position==0 || head==nullptr)
    {
        new_node->next=head;
        head=new_node;
        return;
    }
    node *current=head;
    int count=0;

    while(current!=0 && count<position -1)
    {
        current=current->next;
        count++;
    }
    if(current==nullptr)
    {
        cout<<"impossible"<<endl;
        delete new_node;
    }


    new_node->next = current->next;
    current->next = new_node;
}



int main()
{
insert(10);
insert(20);
insert(40);
cout << "Linked List: "<<endl;
print_list();
insert_node( 30,2);
print_list();
insert_node( 30,9);
print_list();
return 0;
}
