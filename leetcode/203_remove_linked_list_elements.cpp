#include<iostream>
using namespace std;
struct ListNode
{
    int val;
    ListNode *next;
};
ListNode *head=nullptr;

void insert_data(int n)
{
    ListNode *new_node=new ListNode ;
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
void print(ListNode *head)
{
    ListNode *current=head;
    while(current!=nullptr)
    {
        cout<<current->val<<endl;
        current=current->next;
    }

}

ListNode *removeElements(ListNode *head,int val)
{

     ListNode  *curr = head, *prev = nullptr;

        while (curr != nullptr) {
            if (curr->val == val) {
                if (prev == nullptr) {
                    head = curr->next;
                } else {
                    prev->next = curr->next;
                }
            ListNode * temp = curr;
                curr = curr->next;
                delete temp;
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
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        int  n=a[i];
        insert_data(n);
    }
    print(head);
    int m;
    cin>>m;
    head = removeElements(head, m);

    print(head);
    while (head != nullptr) {
             ListNode*temp = head;
            head = head->next;
            delete temp;
        }

        return 0;
}
