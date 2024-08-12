class Solution {
public:
    vector<int> rightSideView(TreeNode* root) {
        if(root==NULL){
            return{};
        }
        queue<TreeNode*>q;
        vector<int>ans;
        q.push(root);
        while(!q.empty()){
            TreeNode* node =NULL;
            int n=q.size();
            while(n--){
                node=q.front();
                q.pop();
                if(node->left){
                    q.push(node->left);
                }
                if(node->right){
                    q.push(node->right);
                }
            }
            ans.push_back(node->val);
        }
        return ans;
    }
};
