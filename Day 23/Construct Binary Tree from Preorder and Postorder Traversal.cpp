class Solution {
public:
vector<bool>visited;
vector<int>pre,post;
void f(TreeNode* root,vector<int>& preorder, vector<int>& postorder){
    int d = root->val;
    int pr = pre[d];
    int pst = post[d];

    for(int j = pr + 1;j < preorder.size();j++){
        if(!visited[preorder[j]] and post[d] > post[preorder[j]]){
            visited[preorder[j]] = 1;
            root->left = new TreeNode(preorder[j]);
            f(root->left,preorder,postorder);
            break;
        }
    }

    for(int j = pst - 1;j >= 0;j--){
        if(!visited[postorder[j]] and pre[d] < pre[postorder[j]]){
            visited[postorder[j]] = 1;
            root->right = new TreeNode(postorder[j]);
            f(root->right,preorder,postorder);
            break;
        }
    }


}
    TreeNode* constructFromPrePost(vector<int>& preorder, vector<int>& postorder) {
        visited.resize(31,false);
        pre.resize(31,0);
        post.resize(31,0);
        for(int i = 0;i < preorder.size();i++)pre[preorder[i]] = i;
        for(int i = 0;i < postorder.size();i++)post[postorder[i]] = i;

        TreeNode* root = new TreeNode(preorder[0]);

        f(root,preorder,postorder);
        return root;

    }
};
