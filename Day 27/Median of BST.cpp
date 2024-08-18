void solve(struct Node* root, vector<int>& ans) {
    if(root == NULL) return;
    solve(root->left,ans);
    ans.push_back(root->data);
    solve(root->right,ans);
}
float findMedian(struct Node *root)
{
      vector<int>ans;
      solve(root,ans);
      int n = ans.size();
      if(n%2==0){
          return (ans[n/2 - 1] + ans[n/2]) / 2.0;
      }
      return ans[n/2];
}
