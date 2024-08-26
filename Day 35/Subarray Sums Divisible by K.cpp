class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        vector<int> prefixRem(nums.size());
        prefixRem[0] = (nums[0]%k + k)%k;
        for(int i=1;i<nums.size();i++) {
            prefixRem[i]= (prefixRem[i-1] + nums[i])%k;
            prefixRem[i] = (prefixRem[i]+k)%k;
        }
        unordered_map<int,int>mp;
        mp[0] = 1;
        int ans=0;
        for(int i=0;i<nums.size();i++) {
            ans+= mp[prefixRem[i]];
            mp[prefixRem[i]]++;
        }
        return ans;

    }
};
