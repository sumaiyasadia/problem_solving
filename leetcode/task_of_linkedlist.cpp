#include<iostream>
using namespace std;
struct node
{
    int data;
    node *next;
};
node *head=nullptr;
void insert_data(int n)
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
    while(current->next != nullptr)
    {
        current=current->next;
    }
    current->next=new_node;
}
void print_list()
{
    node *current=head;
    while(current!=nullptr)
    {
        cout<<current->data<<endl;
        current=current->next;
    }

}
bool search_data(int n)
{

    node *current=head;
    while(current!=nullptr)
    {
        if(current->data==n)
        {
            return true;
        }
        current=current->next;
    }
    return false;
}
void delete_data(int n)
{

    node *current,*previous;
    current= head;
    previous=nullptr;
    while(current !=nullptr)
    {
        if (current->data==n)
        {
            if(previous==nullptr)
            {
                head=current->next;
                delete head;
                return;
            }
            else if(current->next==nullptr)
            {
                previous->next==nullptr;
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
        previous =current;
        current=current->next;
    }

}
int main()
{
    cout<<"Press key from 1 to 3 for any operatiom"<<endl;
    cout<<"1.Insert \n"<<"2.Search\n"<<"3.Delete\n"<<"4.Close operation\n";
    int n=0;
    while(n!=4)
    {
        cin>>n;
        if(n==1)
        {
            cout<<"Take value for insertion:\n";

            int a[5];
            for(int i=0; i<5; i++)
            {
                cin>>a[i];
            }
            for(int i=0; i<5; i++)
            {
                int n=a[i];
                insert_data( n);
            }
            cout<<"Print linked list:\n";

            print_list();
        }
        else if(n==2)
        {
            if(head==nullptr)
            {
                cout<<"Linkedlist is empty"<<endl;
              continue;
            }

            cout<<"Search value from linklist:\n";
            int m;
            cin>>m;

            if(search_data(m))
            {
                cout<<"Yes"<<endl;;
            }
            else
            {

                cout<<"NO"<<endl;
            }
        }
        else if(n==3)
        {
            if(head==nullptr)
            {
                cout<<"Linkedlist is empty"<<endl;
               continue;
            }
             cout<<"Delete node from linklist:\n";
             int m;
             cin>>m;
             delete_data( m);
             cout<<"After delete"<<endl;

             print_list();
        }

    }
}
