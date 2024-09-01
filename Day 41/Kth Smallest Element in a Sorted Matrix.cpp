class Solution {
public:
    int kthSmallest(vector<vector<int>>& mat, int k) {
        int n=mat.size();
        multiset<int>ms;
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                ms.insert(mat[i][j]);
            }
        }
        k--;
        while(k--) ms.erase(ms.begin());
        return *ms.begin();
        
    }
};
