class Solution 
{
    public:
    //Function to find the minimum number of swaps required to sort the array. 
	int minSwaps(vector<int>&nums)
	{
	    vector <pair<int,int>>arr(nums.size());
	    for(int i=0;i<nums.size();i++){
	        arr[i]={nums[i],i};
	    }
	    sort(arr.begin(),arr.end());
	    int count =0;
	    for(int i=0;i<arr.size();i++){
	        if(arr[i].second==i){
	            continue;
	        }
	        else{
	            count++;
	            swap(arr[i],arr[arr[i].second]);
	            i--;
	        }
	    }
	    return count;
	}
};
