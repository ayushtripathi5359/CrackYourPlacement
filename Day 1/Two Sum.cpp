class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int>ans;
        for(int i=0;i<numbers.size();i++){
            for(int j=i+1;j<numbers.size();j++){
               
                if(numbers[i]+numbers[j]==target){
                    return{i,j};
                }
            }
        }
        return {-1,-1};
  }
};
