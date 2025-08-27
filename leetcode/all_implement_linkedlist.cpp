
#include<iostream>
using namespace std;
struct node
{
    int data;
    node *next;


};
node *head=nullptr;
void insert_value(int n)
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
    while(current !=nullptr)
    {
        cout<<current->data<<endl;
        current=current->next;
    }
    cout<<"NULL"<<endl;
}

bool search_node(int n)
{
    node *current=head;
    while(current !=nullptr)
    {
        if(current->data==n)
        {
            return true;
        }
        current=current->next;
    }
    return false;


}
void delete_node(int n)
{
    node *current,*previous;
    current=head,previous=nullptr;
    while(current!=nullptr)
    {
        if(current->data==n)
        {
            if(previous==nullptr)
            {
                head=current->next;
                delete current;
                return;
            }
            else if(current->next==nullptr)
            {
                previous->next=nullptr;
                delete current;
                return;
            }
            else
            {
                previous->next=current->next;
                delete current;
                return;
            }
        }
        previous=current;
        current=current->next;
    }
}
void insert_node(int n,int position)
{
    node *new_node=new node;
    new_node->data=n;
    if(position == 0 || head==nullptr)
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
    cout<< "Impossible"<<endl;
    delete new_node;
    }
   new_node->next=current->next;
   current->next=new_node;

}
int main()
{
    insert_value(20);
     insert_value(30);
      insert_value(40);
      cout<<"Print linked list"<<endl;
print_list();
cout<<"Search linked list"<<endl;
cout<<search_node(30)<<endl;
cout<<"Delete linked list"<<endl;
delete_node(40);
print_list();
cout<<"Insert linked list"<<endl;
insert_node(50,2);
print_list();
}
