class Solution {
  public:
    // Function that constructs BST from its preorder traversal.
    Node* solve(Node* root, int data) {
        if(root==NULL) {
            return newNode(data);
        }
        if(data < root->data) {
            root-> left = solve(root->left,data);
        }
        if(data > root->data) {
            root->right = solve(root->right,data);
        }
        return root;
    }
    Node* Bst(int pre[], int size) {
        Node* root = NULL;
        for(int i=0;i<size;i++) {
            root = solve(root,pre[i]);
        }
        return root;
    }
};
