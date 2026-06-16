class Solution {
private:
    ListNode* reverse(ListNode* head) {
        ListNode* prev = nullptr;
        ListNode* nextNode = nullptr;
        while (head) {
            nextNode = head->next;
            head->next = prev;
            prev = head;
            head = nextNode;
        } return prev;
    }
public:
    bool isPalindrome(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;
        while(fast && fast->next) {
            slow = slow->next;
            fast=fast->next->next;
        }
        ListNode* first = head;
        ListNode* second = reverse(slow);
        while (second) {
            if (first->val != second->val) return false;
            first = first->next;
            second = second->next;
        } return true;
    }
};