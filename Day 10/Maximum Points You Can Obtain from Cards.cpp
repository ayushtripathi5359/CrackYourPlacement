class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int i=0;
        int j=0;
        int currSum=0;
        int totalSum=0;
        int ans=0;
        for(auto i : cardPoints)totalSum+=i;
        if(k==cardPoints.size())return totalSum;
        while(j<cardPoints.size())
        {   
            currSum+=cardPoints[j];
            if(j-i+1<cardPoints.size()-k)
            {
                j++;
            }
            else{
                ans=max(ans,totalSum-currSum);
                currSum-=cardPoints[i];
                i++;
                j++;
            }
            
        }

        return ans;
    }
};
