class Solution {
public:
    Node* connect(Node* root) {
        queue<Node*> q;
        if (root) q.push(root);
        while (q.size()) {
            int len = q.size();
            Node* curr;
            while (len--) {
                curr = q.front(), q.pop();
                curr->next = len ? q.front():NULL;
                if (curr->left) q.push(curr->left);
                if (curr->right) q.push(curr->right);         
            }
        }         
        return root;
    }
};
