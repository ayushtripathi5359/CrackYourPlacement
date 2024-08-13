class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> v;
        if(root==NULL){
            return v;
        }
        stack<TreeNode*>st1;
        stack<TreeNode*>st2;
        st1.push(root);
        while(!st1.empty() || !st2.empty()){
            vector<int> v1;
            while(!st1.empty()){
               TreeNode*temp=st1.top();
                st1.pop();
                v1.push_back(temp->val);
                if(temp->left){
                    st2.push(temp->left);
                }
                if(temp->right){
                    st2.push(temp->right);
                }
            }
            if(!v1.empty()){
                v.push_back(v1);
            }
            v1.clear();
            while(!st2.empty()){
               TreeNode*temp=st2.top();
                st2.pop();
                v1.push_back(temp->val);
                if(temp->right){
                    st1.push(temp->right);
                }
                if(temp->left){
                    st1.push(temp->left);
                }
            }
            if(!v1.empty()){
                v.push_back(v1);
            }
            v1.clear();
        }
        return v;
    }
};
