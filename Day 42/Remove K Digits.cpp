class Solution {
public:
    string removeKdigits(string num, int k) {

        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);

        int n = num.size();                                               
        string ans = "";

        for(int i=0; i< n; i++){
            if(ans == "") ans.push_back(num[i]);
            else{
                if(num[i] >= ans.back()) ans.push_back(num[i]);
                else{
                    while(ans != "" && ans.back() > num[i] && k >0){
                        ans.pop_back();
                        k--;
                    }
                    ans.push_back(num[i]);
                }
            }
        }
        while(k > 0){
            ans.pop_back();
            k--;
        }
        int i =0;
        while(ans[i] == '0' && i < ans.size()) i++;
        if(i == ans.size()) return "0";
        return ans.substr(i); 
        
    }
};
