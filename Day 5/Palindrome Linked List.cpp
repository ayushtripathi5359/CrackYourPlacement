class Solution {
public:
    bool isPalindrome(ListNode* head) {
        if(head->next==NULL){
            return 1;
        }
        ListNode *temp=head;
        int count=0;
        while(temp){
            count++;
            temp=temp->next;
        }
        count=count/2;
        ListNode *curr=head, *prev=NULL;
        
        while(count--){
            prev=curr;
            curr=curr->next;
        }
        prev->next=NULL;
        prev=NULL;
        ListNode *fut=NULL;
        while(curr){
            fut = curr->next;
            curr->next=prev;
            prev=curr;
            curr=fut;
        }
        ListNode *head1=head, *head2=prev;
        while(head1){
            if(head1->val!=head2->val){
                return 0;
            }
            head1=head1->next;
            head2=head2->next;
        }
        return 1;
    }
};
