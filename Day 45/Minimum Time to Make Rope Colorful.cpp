class Solution {
public:
    int minCost(string Colors, vector<int>& Time) {
        int ans=0,i=1,cnt=Time[0],maxi=Time[0];
        while(i<Colors.length()){
            while(i<Colors.length() && Colors[i]==Colors[i-1]){
                maxi=max(maxi,Time[i]);
                cnt+=Time[i];
                i++;
            }
            if(Colors[i]!=Colors[i-1]) ans+=cnt-maxi;
            cnt=Time[i];
            maxi=Time[i];
            i++;
        }
        return ans;
    }
};
