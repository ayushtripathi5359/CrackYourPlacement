class Solution
{
    public:

    Node *compute(Node *head)
    {
        if(head==NULL||head->next==NULL){
            return head;
        }
        Node* prev=NULL;
        Node* curr=head;
        while(curr!=NULL){
            Node* temp=curr->next;
            while(temp!=NULL&&temp->data<=curr->data){
                temp=temp->next;
            }
            if(temp==NULL){
                prev=curr;
                curr=curr->next;
            }
            else if(temp!=NULL&&curr==head) {
                curr=curr->next;
                head=curr;
            }
            else if(temp!=NULL&&curr!=head){
                prev->next=curr->next;
                curr=prev->next;
            }
                    

        }
        return head;
    }
    
};
