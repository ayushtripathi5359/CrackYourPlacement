class Solution{
  public:
    vector<vector<string> > Anagrams(vector<string>& strs) {
        //code here
        vector<vector<string>> ans;
        unordered_map<string,vector<string>> umap;
        for(auto x:strs){
            string temp=x;
            sort(x.begin(), x.end());
            umap[x].push_back(temp);
        }
        for(auto x:umap){
            ans.push_back(x.second);
        }
        return ans;
    }
};
