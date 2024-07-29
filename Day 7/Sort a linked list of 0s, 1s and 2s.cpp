//problem solved in code360 platform by coding ninjas
Node* sortList(Node *head){
    // Write your code here.
    if(!head || !head->next){
    return head;
    }
    Node* zeroHead = new Node(-1); 
    Node* oneHead = new Node(-1);
    Node* twoHead = new Node(-1);
    
    Node* zero = zeroHead;
    Node* one = oneHead;
    Node* two = twoHead;
    Node*temp=head;
    while(temp){
        if(temp->data==0){
            zero->next=temp;
            zero=temp;
        }
        else if(temp->data==1){
            one->next=temp;
            one=temp;
        } else {
            two->next = temp;
            two = temp;
        }
        temp = temp->next;
    }
        zero->next=(oneHead->next)? oneHead->next : twoHead->next;
        one->next=twoHead->next;
        two->next=NULL;
        Node* newHead=zeroHead->next;
        delete zeroHead;
        delete oneHead;
        delete twoHead;
        return newHead;
    
}
