class Solution {
public:
    int getDecimalValue(ListNode* head) {
        ListNode*temp=head;
        int count=0;
        while(temp){
            count++;
            temp=temp->next;
        }
        temp=head;
        int ans=0;
        
        while(temp!=NULL){
            count--;
            if(temp->next!=NULL && count>=1 && temp->val!=0){
                
                ans+=pow(2,count);
            }
            if(temp->next==NULL){
                if(temp->val==1){
                    ans+=1;
                }
                else{
                    ans+=0;
                }
            }
            temp=temp->next;
            }
        
        return ans;
    }
};
