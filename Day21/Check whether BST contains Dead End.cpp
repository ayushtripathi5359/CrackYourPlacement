class Solution{
  public:
    bool solve(Node* root,int mini,int maxi){
        if(!root) return false;
        
        if(!root->left && !root->right && (mini+2==maxi || (mini==INT_MIN && maxi-1==1))){
            return true;
        }
        
        bool left=solve(root->left,mini,root->data);
        bool right=solve(root->right,root->data,maxi);
        return left||right;
    }
    bool isDeadEnd(Node *root)
    {
        //Your code here
        return solve(root,INT_MIN,INT_MAX);
    }


};
