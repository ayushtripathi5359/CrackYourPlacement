class Solution {
public:
    int widthOfBinaryTree(TreeNode* root) {
        if(!root){
            return 0;
        }
        queue<pair<TreeNode*,long long>>q;
        q.push({root,0});
        long  ans=0;
        while(!q.empty()){
            int n=q.size();
            int mini=q.front().second;
            long first=0,last=0;
        for(int i=0;i<n;i++){
            long long curr=q.front().second-mini;
            TreeNode*node=q.front().first;
            q.pop();
            if(i==0) first=curr;
            if(i==n-1) last=curr;
            if(node->left){
                q.push({node->left,curr*2+1});
            }
            if(node->right){
                q.push({node->right,curr*2+2});
            }

        }
          ans=max(ans,last-first+1);
        }
        return ans;
    }
};
