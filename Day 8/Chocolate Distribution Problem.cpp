class Solution{
    public:
    long long findMinDiff(vector<long long> a, long long n, long long m){
    sort(a.begin(), a.end());
        
        int i = 0;
        int ans = 0;
        int mini = INT_MAX;
        
        for(int i = 0; i <= n-m; i++){
            
            ans = a[i+m-1] - a[i];
            mini = min(ans, mini);
        }
        return mini;
    }  
};
