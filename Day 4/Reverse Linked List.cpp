class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode*curr=head, *prev=NULL, *fut=NULL;
        while(curr){
            fut = curr->next;
            curr->next=prev;
            prev=curr;
            curr=fut;
        }
        head=prev;
        return head;
    }
};
