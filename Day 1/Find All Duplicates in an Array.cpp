class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int>res;
        for(int i=0; i<nums.size();i++){
            int n= abs(nums[i]);
            if(nums[n-1]<0){
                res.push_back(abs(nums[i]));
            }
            nums[n-1]=-nums[n-1];
        }
        return res;
    }
};
