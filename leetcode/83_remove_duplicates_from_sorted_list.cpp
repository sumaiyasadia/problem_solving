#include<iostream>
using namespace std;
struct ListNode
{
    int val;
    struct ListNode *next;
};
ListNode *head=nullptr;
void insert_data(int n)
{
    ListNode*new_node=new ListNode;
    new_node->val=n;
    new_node->next=nullptr;
    if(head==nullptr)
    {
        head=new_node;
        return;
    }
    ListNode *current=head;
    while(current->next!= nullptr)
    {
        current=current->next;
    }
    current->next=new_node;
}
//print
void print(ListNode* head)
{
    ListNode *current=head;
    while(current!=nullptr)
    {
        cout<<current->val<<endl;
        current=current->next;
    }

}
ListNode* deleteDuplicates( ListNode* head)
{
    if(head==nullptr)
    {
        return head;
    }
    ListNode *current=head;

    while(current!=nullptr&&current->next!=nullptr)
    {
        if(current->val==current->next->val)
        {


            current->next=current->next->next;

        }
        else
        {
            current=current->next;

        }


    }


    return head;

}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        int  n=a[i];
        insert_data(n);
    }

    ListNode *update_head=deleteDuplicates(head);

    print(update_head);

}
