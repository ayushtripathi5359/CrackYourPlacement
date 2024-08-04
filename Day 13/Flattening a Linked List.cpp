class Solution {
  public:
    // Function which returns the  root of the flattened linked list.
    Node *mergeLists(Node* a,Node* b)
    {
        Node* dummy=new Node(0);
        Node* temp=dummy;
        while(a != NULL && b != NULL)
        {
            if(a->data<=b->data)
            {
                dummy->bottom=a;
                dummy=dummy->bottom;
                a=a->bottom;
            }
            else
            {
                dummy->bottom=b;
                dummy=dummy->bottom;
                b=b->bottom;
            }
        }
        if(a)  dummy->bottom=a;
        else   dummy->bottom=b;
        
        return temp->bottom;
    }
Node *flatten(Node *root) {
    if(root==NULL || root->next==NULL)
    return root;
    root->next=flatten(root->next);
    root=mergeLists(root,root->next);
    return root;
}
};
