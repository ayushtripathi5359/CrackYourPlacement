class Solution {
public:
    int findDuplicate(vector<int>& n) {
        int ans = -1;
        for(int i=0;i<n.size();i++){
            int index = abs(n[i]);
            if (n[index]<0){
                ans = index;
                break;
            }
            n[index]*=-1;
        }
        return ans;
    }
};
