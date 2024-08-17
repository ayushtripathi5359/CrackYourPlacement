class Solution{
public:
     int getCount(Node *root, int l, int h)
    {
         int count=0;
        if(root==NULL){
            return 0;
        }
        if(root->data >=l && root->data <=h){
            count++;
        }
        int lc=getCount(root->left,l,h);
        int rc=getCount(root->right,l,h);
    
        return count+lc+rc;
    }
};
