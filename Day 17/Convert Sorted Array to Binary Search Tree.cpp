class Solution {
    TreeNode* helper(vector<int>& arr, int s, int e) {
        if (s > e)
            return nullptr;
        int mid = s + (e - s) / 2 ;
        TreeNode* node = new TreeNode(arr[mid]);
        node->left = helper(arr, s, mid - 1);
        node->right = helper(arr, mid + 1, e);
        return node;
    }

public:
    TreeNode* sortedArrayToBST(vector<int>& arr) {
        int n = arr.size();
        if (n == 0)
            return nullptr;
        TreeNode* root = helper(arr, 0, n - 1);
        return root;
    }
};
