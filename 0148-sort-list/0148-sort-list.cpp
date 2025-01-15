class Solution {
public:
    ListNode* mergeLL(ListNode*list1,ListNode*list2){
        ListNode*dummynode = new ListNode(-1);
        ListNode*temp = dummynode;

        while(list1!=NULL && list2!=NULL){
            if(list1->val < list2->val){
                temp->next = list1;
                temp = list1;
                list1=list1->next;
            }
            else{
                temp->next = list2;
                temp = list2;
                list2 = list2->next;
            }
        }
        if(list1){
            temp->next = list1;
        }
        else{
            temp->next = list2;
        }

        return dummynode->next;
    }
    ListNode* findmid(ListNode*head){
        ListNode*fast = head->next;
        ListNode*slow = head;

        while(fast!=NULL && fast->next!=NULL){
            fast = fast->next->next;
            slow = slow->next;
        }
        return slow;
    }
    ListNode* sortLL(ListNode*head){
        if(head == NULL || head->next == NULL){
            return head;
        }
        ListNode*middle = findmid(head);
        ListNode*left = head;
        ListNode*right = middle->next;
        middle->next = NULL;

        left = sortLL(left);
        right = sortLL(right);

        return mergeLL(left,right);
    }
    ListNode* sortList(ListNode* head) {
        return sortLL(head);
    }
};