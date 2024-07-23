class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int low=0, high=0;
        while(low<nums.size()){
            if (nums[low]!=0){
                swap(nums[low],nums[high]);
                high++;
            }
            low++;
        }

    }
};
