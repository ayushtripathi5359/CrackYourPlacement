class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n=heights.size();
        stack<int>st;
        vector<int>right(n);
        vector<int>left(n);
        //next smallest right 
        for(int i=0; i<n;i++){
            while(!st.empty() && heights[st.top()]>heights[i]){
                right[st.top()]=i;
                st.pop();
            }
            st.push(i);
        }
        while(!st.empty()){
            right[st.top()]=n;
            st.pop();
        }

        //next smallest left
        for(int i=n-1; i>=0;i--){
            while(!st.empty()&& heights[st.top()]>heights[i]){
                left[st.top()]=i;
                st.pop();
            }
            st.push(i);
        }
        while(!st.empty()){
            left[st.top()]=-1;
            st.pop();
        }
        //Calculate area
        for(int i=0;i<left.size();i++){
            cout<< left[i]<<" ";
        }
        cout<<endl;
        for(int i=0;i<right.size();i++){
            cout<< right[i]<<" ";
        }
        int ans=0;
        for(int i=0;i<n;i++)
        ans=max(ans,heights[i]*(right[i]-left[i]-1));
        return ans;
    }
};
