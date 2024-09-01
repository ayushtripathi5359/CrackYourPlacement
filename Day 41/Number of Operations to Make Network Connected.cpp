class Solution {
public:

    void dfs(int i,vector<int> &visited ,vector<vector<int>>&G){
        visited[i] =1;
        for(auto c :G[i] ){
            if(!visited[c])
                dfs(c,visited,G);
        }
    }
    int makeConnected(int n, vector<vector<int>>& connections) {
        if(connections.size() < n-1)
            return -1;

        int count=0; 
        vector<int> visited(n,0);
        vector<vector<int>> G(n);
        
        for(int i =0 ; i< connections.size() ; i++){
            G[connections[i][0]].push_back(connections[i][1]);
            G[connections[i][1]].push_back(connections[i][0]);
        }

        for(int i =0 ; i<n ; i++){
            if(!visited[i]){
                count++;
                visited[i]=1;
                dfs(i,visited,G);
            }
        }
        
        return count-1;
    }
};
