class Solution {
  public:
    int findPair(int n, int x, vector<int> &arr) {
        // code here
        sort(arr.begin(),arr.end());
        int start=0, end=1;
        while(start<n && end<n){
            if(arr[end]-arr[start]==x && start!=end){
                return 1;
            }
            else if(arr[end]-arr[start]<x){
                end++;
            }
            else{
                start++;
            }
        }
        return -1;
    }
};
