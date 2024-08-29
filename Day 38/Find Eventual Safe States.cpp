class Solution {
public:
    unordered_map<int,bool>mp;
    bool isSafe(vector<vector<int>>& graph, int node, vector<int>&visited,vector<int>&ans){
        if(visited[node])return mp[node];
        visited[node]=true;
        if(graph[node].empty()){
            ans.push_back(node);
            return mp[node]=true;
        }
        for(auto it: graph[node]){
            if(!isSafe(graph,it,visited,ans))return false;
        }
        ans.push_back(node);
        return mp[node]=true;
    }
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
        vector<int>ans;
        vector<int>visited(graph.size(),false);
        for(int i=0; i<graph.size(); i++){
            if(!visited[i]){
                isSafe(graph,i,visited,ans);
            }
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};
