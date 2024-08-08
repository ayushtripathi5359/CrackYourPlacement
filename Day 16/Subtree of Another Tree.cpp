class Solution {
public:
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        if(subRoot==NULL)
            return true;
        if(root==NULL)
            return false;
        if(isidentical(root,subRoot))
            return true;
        return isSubtree(root->left,subRoot) || isSubtree(root->right,subRoot);
    }

    bool isidentical(TreeNode* a, TreeNode* b){
        if(a==NULL && b==NULL)
            return true;
        if(a==NULL || b==NULL)
            return false;
        if(a->val!=b->val)
            return false;
        return isidentical(a->left,b->left) && isidentical(a->right,b->right);
    }
};
