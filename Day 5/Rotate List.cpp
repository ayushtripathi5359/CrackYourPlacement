class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL|| head->next==NULL){
            return head;
        }
        ListNode *temp=head;
        int count =0;
        while(temp){
            count++;
            temp=temp->next;
        }
        k=k % count;
        if(k==0){
            return head;
        }
        count-=k;
        ListNode *prev=NULL, *curr=head;
        while(count--){
            prev=curr;
            curr=curr->next;
        }
        prev->next=NULL;
        ListNode*tail=curr;
        while(tail->next!=NULL){
            tail=tail->next;
        }
        tail->next=head;
        head=curr;
        return head;
    }
};
