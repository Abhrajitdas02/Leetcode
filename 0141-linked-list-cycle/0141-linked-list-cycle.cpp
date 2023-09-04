/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode *temp = head;
        ListNode *x = head;
        while(temp != NULL && temp ->next != NULL)
        {
            temp = temp->next->next;
            x = x->next;
            if(temp == x)
                return true;
        }
        return false;
    }
};