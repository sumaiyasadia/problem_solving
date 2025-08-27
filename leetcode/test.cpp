class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        if (!head || !head->next) {
            return head;  // If list has 0 or 1 node, no swap needed
        }

        ListNode* curr = head;
        ListNode* prev = nullptr;
        ListNode* newHead = head->next;  // The second node will become the new head after swap

        while (curr && curr->next) {
            ListNode* first = curr;
            ListNode* second = curr->next;

            // Swapping
            first->next = second->next;
            second->next = first;

            // Connect previous pair to current swapped pair
            if (prev) {
                prev->next = second;
            }

            // Update prev to the last node of the swapped pair
            prev = first;

            // Move curr to the next pair
            curr = first->next;
        }

        return newHead;
    }
};
