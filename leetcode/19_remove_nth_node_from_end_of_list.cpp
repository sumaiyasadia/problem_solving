
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

void print(ListNode* head)
{
    ListNode *current=head;
    while(current!=nullptr)
    {
        cout<<current->val<<endl;
        current=current->next;
    }

}
 ListNode* removeNthFromEnd(ListNode* head, int n)
{

 int length = 0;
        ListNode* temp = head;


        while (temp != nullptr) {
            length++;
            temp = temp->next;
        }

        // If we need to remove the head
        if (n == length) {
            ListNode* newHead = head->next;
            delete head;
            return newHead;
        }


        temp = head;
        for (int i = 1; i < length - n; ++i) {
            temp = temp->next;
        }


        ListNode* toDelete = temp->next;
        temp->next = temp->next->next;
        delete toDelete;

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
    head=removeNthFromEnd( head, m);

    print(head);
}
