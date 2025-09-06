#include<bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    node *next;
    node *previous;
};
node *head=nullptr,*tail=nullptr;
void insert_data(int n)
{
    node *new_node=new node;
    new_node->data=n;
    new_node->next=nullptr;
    new_node->previous=nullptr;
    if(head==nullptr)
    {
        head=new_node;
        tail=new_node;
        return;
    }
    new_node=tail->next;
    new_node->previous=tail;
    tail=new_node;



}
void print()
{
if(head==nullptr)
{
    return;
}
node *current=nullptr;
while(current!=nullptr)
{
    cout<<current->data<<endl;
    current=current->next;
}

}


int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        int m=a[i];
        insert_data(m);

    }
    print();
}

