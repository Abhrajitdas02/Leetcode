/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
        if(head->next==NULL) return NULL;
       ListNode* fast=head;
        ListNode* slow=head;
        ListNode* x=new ListNode;
        while(fast && fast->next){
            fast=fast->next->next;
            x=slow;
            x->next=slow->next;
            slow=slow->next;
        }
        x->next=slow->next;
        x=head;
        return x;
    }
};