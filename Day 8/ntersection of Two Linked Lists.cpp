class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode *temp=headA;
        int a=0, b=0;
        while(temp){
            temp=temp->next;
            a++;
        }
        temp=headB;
        while(temp){
            temp=temp->next;
            b++;
        }
        int diff = abs(a-b);
        if(a<b){
            while(diff--){
                headB=headB->next;
            }
        }
        else{
            while(diff--){
                headA=headA->next;
            }
        }
        while(headA && headB){
            if(headA==headB){
                return headA;
            }
            headA=headA->next;
            headB=headB->next;
        }
        return NULL;
    }
};
