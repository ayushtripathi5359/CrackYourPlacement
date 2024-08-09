class Solution {
public:
    int max_height(TreeNode* &root){
        if(root==NULL){
            return 0;
        }
        int l=max_height(root->left);
        int r=max_height(root->right);
        return max(l,r)+1;
    }
    int maxDepth(TreeNode* root) {
        return max_height(root);
    }
};
