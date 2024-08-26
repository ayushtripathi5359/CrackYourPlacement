class Solution {
  public:
    // Function to detect cycle in an undirected graph.
    bool isCycle(int V, vector<int> adj[]) {
        queue<int> q;
        vector<int> parent(V);
        vector<int> visited(V, false);
        
        for(int i = 0; i<V; i++){
            if(!visited[i]){
                q.push(i);
                
                while(!q.empty()){
                int node = q.front();
                q.pop();
                visited[node] = true;
            
                for(auto &nbr : adj[node]){
                    if(!visited[nbr]){
                        parent[nbr] = node;
                        q.push(nbr);
                    }
                    else if(visited[nbr] && parent[node] != nbr){
                        return true;
                    }
                }
        }
            }
        }
        return false;
        
    }
};
