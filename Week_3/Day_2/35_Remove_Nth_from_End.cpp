class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode dummy(0);
        dummy.next = head;
        ListNode* i = &dummy;
        ListNode* j = &dummy;

        for (int k = 0; k <= n; k++) {
            j = j->next;
        }

        while (j) {
            i = i->next;
            j = j->next;
        }

        ListNode* temp = i->next;
        i->next = temp->next;
        return dummy.next;
    }
};