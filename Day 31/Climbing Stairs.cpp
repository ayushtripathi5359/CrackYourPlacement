class Solution {
    private:
    int ncr(int n,int r){
        double sum=1;
        for(int i = 1; i <= r; i++){
            sum = sum * (n - r + i) / i;
        }
        return (int)sum;
    }
public:
    int climbStairs(int n) {
       int ans=1;
      for(int i=1;i<=n;i++){
          int x=ncr(n-i,i);
          ans=ans+x;
      }
      return ans;

    }
};
