class Solution {
public:
    std::vector<std::vector<int>> threeSum(std::vector<int> &nums) {
        std::sort(nums.begin(), nums.end());
        std::vector<std::vector<int>> answer;
        
        if (nums.size() < 3) {
            return answer;
        }
        
        for (int i = 0; i < nums.size(); ++i) {
            if (nums[i] > 0) {
                break;
            }
            
            if (i > 0 && nums[i] == nums[i - 1]) {
                continue;
            }
            
            int low = i + 1, high = nums.size() - 1;
            
            while (low < high) {
                int sum = nums[i] + nums[low] + nums[high];
                if (sum > 0) {
                    high--;
                } else if (sum < 0) {
                    low++;
                } else {
                    answer.push_back({nums[i], nums[low], nums[high]});
                    int last_low_occurrence = nums[low], last_high_occurrence = nums[high];
                    
                    while (low < high && nums[low] == last_low_occurrence) {
                        low++;
                    }
                    
                    while (low < high && nums[high] == last_high_occurrence) {
                        high--;
                    }
                }
            }
        }
        
        return answer;
    }
};
