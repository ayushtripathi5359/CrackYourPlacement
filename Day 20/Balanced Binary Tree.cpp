class Solution {
public:
    
    int levelsOfTree(TreeNode* root){
        if(root==NULL) return 0; 
        return 1 + max(levelsOfTree(root->left),levelsOfTree(root->right));
    }
   
    bool isBalanced(TreeNode* root) {
        if (root == NULL) return true;  
    
        int LST = levelsOfTree(root->left);
        int RST = levelsOfTree(root->right);
        
        if(abs(LST-RST) > 1) return false;
        
        bool leftBalanced = isBalanced(root->left);
        bool rightBalanced = isBalanced(root->right);
        return leftBalanced && rightBalanced;
         }
};
