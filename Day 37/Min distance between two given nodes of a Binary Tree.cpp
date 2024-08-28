class Solution{
    public:
    Node* LCA(Node* root,int a,int b){
        if(root == nullptr) return root;
        if(root->data == a || root->data == b){
            return root;
        }
        Node* left = LCA(root->left,a,b);
        Node* right = LCA(root->right,a,b);
        if(left && right) return root;
        else if(left == nullptr && right != nullptr) return right;
        else if(left != nullptr && right == nullptr) return left;
        else return nullptr;
    }
    
    void getans(Node* root,int &ans,int sch,int i){
        if(root == nullptr) return;
        if(root->data == sch){
            ans = ans + i;
            return;
        }
        getans(root->left,ans,sch,i+1);
        getans(root->right,ans,sch,i+1);
    }
    
    int findDist(Node* root, int a, int b) {
        // Your code here
        int ans = 0;
        int i=0;
        Node* temp = LCA(root,a,b);
        getans(temp,ans,a,i);
        getans(temp,ans,b,i);
        return ans;
    }
};
