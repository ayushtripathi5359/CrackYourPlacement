class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int left=0,right=matrix[0].size()-1;
        int top=0,bottom=matrix.size()-1;
        vector<int> res;

        while(top<=bottom && left<=right){
            // left->right  >>>>
            for(int i=left;i<=right;i++){
                res.push_back(matrix[top][i]);
            }
            top++;
            // top->bottom vvvv
            for(int i=top;i<=bottom;i++){
                res.push_back(matrix[i][right]);
            }
            right--;
            if(top<=bottom){
                // right->left <<<<
                for(int i=right;i>=left;i--){
                    res.push_back(matrix[bottom][i]);
                }
                bottom--;
            }
            if(left<=right){
                // bottom->top ^^^^
                for(int i=bottom;i>=top;i--){
                    res.push_back(matrix[i][left]);
                }
                left++;
            }
        }
        return res;
    }
};
