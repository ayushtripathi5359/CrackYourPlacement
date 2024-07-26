class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode *temp=head;
        int count=0;
        while(temp){
            count++;
            temp=temp->next;
        }
        int ans =count-n;
        temp=head;
        ListNode *prev=NULL;
        int a=0;
        while(temp){
            if(a==ans){
                if(prev!=NULL){
                    prev->next=temp->next;
                }
                else{
                    head=temp->next;
                }
                delete temp;
                return head;
            }
            prev=temp;
            temp=temp->next;
            a++;
        }
        return head;
    }
};
