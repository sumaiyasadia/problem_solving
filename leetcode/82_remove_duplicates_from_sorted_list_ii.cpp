#include<iostream>
using namespace std;

struct  ListNode {
    int val;
      ListNode *next;
};
ListNode*head=nullptr;
void insert_data(int n)
{
    ListNode *new_node=new ListNode;
    new_node->val=n;
    new_node->next=nullptr;
    if(head==nullptr)
    {
        head=new_node;
        return;

    }
    ListNode *current=head;
    while(current->next!=nullptr)
    {
        current=current->next;
    }
    current->next=new_node;

}
void print (ListNode*head)
{
     ListNode *current=head;
    while(current!=nullptr)
    {cout<<current->val<<endl;
    current=current->next;
    }
}
 ListNode* deleteDuplicates(ListNode* head)
{

if (!head || !head->next)
    return head;



        while (head && head->next && head->val == head->next->val) {
            int val = head->val;
            while (head && head->val == val) {
                head = head->next;
            }
        }


        if (!head) return nullptr;

        ListNode* prev = head;
        ListNode* curr = head->next;

        while (curr) {
            if (curr->next && curr->val == curr->next->val) {
                int val = curr->val;
                while (curr && curr->val == val) {
                    curr = curr->next;
                }
                prev->next = curr;
            } else {
                prev = curr;
                curr = curr->next;
            }
        }

        return head;
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
print (head);
head=deleteDuplicates( head);
print (head);
}
