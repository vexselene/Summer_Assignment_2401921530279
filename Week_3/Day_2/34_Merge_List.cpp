class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* t1 = list1;
        ListNode* t2 = list2;
        ListNode dummy(0);
        ListNode* tail = &dummy;
        while(t1 && t2) {
            if(t1->val <= t2->val) {
                tail->next = t1;
                t1 = t1->next;
                tail = tail->next;
            } else {
                tail->next = t2;
                t2 = t2->next;
                tail = tail->next;
            }
        }
        while(t1) {
            tail->next = t1;
            tail = tail->next;
            t1 = t1->next;
        }
        while(t2) {
            tail->next = t2;
            tail = tail->next;
            t2 = t2 -> next;
        }
        return dummy.next;
    }
};