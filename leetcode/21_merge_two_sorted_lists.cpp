#include<bits/stdc++.h>
using namespace std;
struct ListNode
{
    int val;
    ListNode *next;
};
ListNode *head1=nullptr,*head2=nullptr;
void insert_list1(int n)
{
    ListNode *new_node=new ListNode;
    new_node->val=n;
    new_node->next=nullptr;
    if(head1==nullptr)
    {
        head1=new_node;
        return;
    }
    ListNode *current=head1;
    while(current->next!=nullptr)
    {
        current=current->next;
    }
    current->next=new_node;
}
void insert_list2(int n)
{
    ListNode *new_node=new ListNode;
    new_node->val=n;
    new_node->next=nullptr;
    if(head2==nullptr)
    {
        head2=new_node;
        return;
    }
    ListNode *current=head2;
    while(current->next!=nullptr)
    {
        current=current->next;
    }
    current->next=new_node;
}

 ListNode* mergeTwoLists(ListNode* list1, ListNode* list2)
  {
        if(list1==nullptr)
        {
            return  list2;
        }
         if( list2==nullptr)
        {
            return  list1;
        }
        if( list1->val <= list2->val)
        {
             list1->next=mergeTwoLists( list1->next,  list2);
            return  list1;
        }
         else
        {
            list2->next= mergeTwoLists( list1,  list2->next);
            return  list2;
        }
    }
    void print(ListNode*current)
    {

        while(current!=nullptr)
        {
            cout<<current->val<<endl;
            current=current->next;
        }
    }

int main()
{
    int n,m;
    cin>>n>>m;
    int l1[n],l2[m];
    for(int i=0;i<n;i++)
    {
        cin>>l1[i];
        int p= l1[i];
        insert_list1(p);
    }

     for(int i=0;i<m;i++)
    {
        cin>>l2[i];
        int q=l2[i];
        insert_list2(q);
    }

    cout<<"print merge"<<endl;
     ListNode*res=mergeTwoLists(head1, head2);
     print(res);

}
