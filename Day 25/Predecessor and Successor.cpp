class Solution
{
    public:
    void findPreSuc(Node* root, Node*& pre, Node*& suc, int key)
    {
        // Your code goes here
        Node* temp=root;
        Node* pred=NULL;
        Node* succ=NULL;
        while(temp!=NULL && temp->key!=key){
            if(temp->key>key){
                succ=temp;
                temp=temp->left;
            }else{
                pred=temp;
                temp=temp->right;
            }
        }
        if(temp!=NULL){
        Node *leftNode=temp->left;
        
        while(leftNode!=NULL){
            pred=leftNode;
            leftNode=leftNode->right;
        }
        
        Node *rightNode=temp->right;
        while(rightNode!=NULL){
            succ=rightNode;
            rightNode=rightNode->left;
        }
        
        }
        
        pre=pred;
        suc=succ;
    }
};
