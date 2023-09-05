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
    ListNode* removeElements(ListNode* head, int val) {
        while(head && head->val==val){
            ListNode* temp=head;
            head=head->next;
            delete temp;
        }
        ListNode* curr=head;
        ListNode* prev=head;
        while(curr){
            if(curr->val==val){
                ListNode* x=curr;
                prev->next=curr->next;
                curr=curr->next;
                delete x;
            }
            else{
                prev=curr;
                curr=curr->next;
            }
        }
        prev=head;
        return prev;
    }
};