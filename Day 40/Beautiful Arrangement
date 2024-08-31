class Solution {
    
public:
void helper(vector <int> nums, int start, int &ans){
	if(start==nums.size()){
            ans++;
            return;
        }
        for(int i=start;i<nums.size();i++){
            swap(nums[start],nums[i]);
            if(nums[start]%(start+1)==0 || (start+1)%nums[start]==0)
                helper(nums,start+1,ans);

        }
}
  
    int countArrangement(int n) {
    vector <int> nums;
	int ans=0;
	for(int i=1; i <= n; i++){
		nums.push_back(i);
	}
	helper(nums, 0, ans);
	return ans;   
    
 }
};
