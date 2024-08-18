class Solution {
public:
    void flatten(TreeNode* root) {
        if(root == NULL) return;
        TreeNode*curr = root;
        while(curr != NULL){
            if(curr->left != NULL){
                TreeNode*r=curr->right;
                curr->right = curr->left;
                TreeNode*pred = curr->left;
                while(pred->right != NULL){
                    pred = pred->right;
                }
                pred->right = r;
                curr = curr->left;
            }
            else{
                curr = curr->right;
            }
        }
        TreeNode*temp = root;
        while(temp->right != NULL){
            temp->left=NULL;
            temp=temp->right;
        }
    }
};
