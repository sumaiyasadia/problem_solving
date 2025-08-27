#include <iostream>
using namespace std;


struct node
{
    int data;
    node* next;


};


node* head = nullptr;


void insert(int n)
{
    node* new_node = new node;

new_node->data=n;
new_node->next = nullptr;
    if (head == nullptr)
    {
        head = new_node;
        return;
    }

    node* current = head;
    while (current->next !=nullptr)
    {
        current = current->next;
    }

    current->next = new_node;
}


void printList()
{

    node* current = head;
    while (current != nullptr)
    {
        cout << current->data <<endl ;
        current = current->next;
    }

    cout << "NULL" << endl;
}
bool search (int n)
{
    node*current=head;
    while(current != nullptr)
    {
        if(current->data==n)
        {
            return true;
        }
        current=current->next;
    }
    return false;
}
void deleteFirst()
{
    if (head == nullptr)
    {
        cout << "List is already empty." << endl;
        return;
    }

    node* temp = head;
    head = head->next;
    delete temp;
}
void deleteLast()
{
     if (head == nullptr)
    {
        cout << "List is already empty." << endl;
        return;
    }
    if(head->next==nullptr)
    {
        head=nullptr;
        cout<<"Last node delete"<<endl;
    }
    node *current=head;
    while(current->next->next!=nullptr)
    {
            current = current->next;
    }

    delete current->next;
    current->next = nullptr;
    //cout << "Last node deleted." << endl;
}
void delete_node(int n)
{
  node *current,*previous;
  current=head;
  previous=nullptr;
  while(current->next !=nullptr)
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
          previous->next =nullptr;
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
int main()
{
    insert(10);
    insert(20);
    insert(30);
    insert(40);

    cout << "Linked List: "<<endl;
    printList();
    cout<<"Delete 30"<<endl;
    delete_node(30);
    printList();
    cout<<search(50)<<endl;
deleteFirst();
cout << "Linked List: "<<endl;
    printList();
    cout << "Delete last node"<<endl;
    deleteLast();
    printList();


    return 0;
}
