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
    bool isPalindrome(ListNode* head) {
        vector<int> n;
        while(head){
         n.push_back(head->val);
         head=head->next;
        }
        vector<int> x;
        x=n;
        reverse(n.begin(),n.end());
        if(n==x) return true;
        else return false;
    }
};