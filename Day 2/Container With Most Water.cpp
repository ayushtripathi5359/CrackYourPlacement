class Solution {
public:
    int maxArea(vector<int>& height) {
        int start=0, end= height.size()-1,a=0;
        while(start<end){
            int c=min(height[start],height[end])*(end-start);
            a=max(a,c);

            if(height[start]<height[end]){
                start++;
            }
            else{
                end--;
            }
            }
            
        
        return a;
    }
};
