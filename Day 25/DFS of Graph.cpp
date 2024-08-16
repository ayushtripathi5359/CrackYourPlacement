class Solution {
    private:
    void solveForDfs(int node, vector<int> &ans, unordered_map<int, bool> &visited, vector<int> adj[] ){
        ans.push_back(node);
      if(visited[0]!=true){
          visited[0]= true;
           
      }
        for(auto i: adj[node]){
            if(!visited[i]){
                visited[i]= true;
            solveForDfs(i, ans, visited, adj);
            
        }
            
        }
        
    }
  public:
    vector<int> dfsOfGraph(int V, vector<int> adj[]) {
        vector<int> ans;
        unordered_map<int , bool> visited;
        
        solveForDfs(0, ans, visited, adj);
        return ans;
        
        
    }
};
