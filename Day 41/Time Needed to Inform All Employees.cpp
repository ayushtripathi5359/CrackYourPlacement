class Solution {
private:
    int DFS(vector<int> adj[], int root, int currTime, vector<int>& informTime){
        if(informTime[root] == 0) return currTime;
        int maxi = 0;
        for(int children : adj[root]){
            maxi = max(maxi,DFS(adj,children,currTime+informTime[root],informTime));
        }
        return maxi;
    }
public:
    int numOfMinutes(int n, int headID, vector<int>& manager, vector<int>& informTime) {
        ios::sync_with_stdio(false);
        cin.tie(0);
        cout.tie(0);
        vector<int> adj[n];

        for(int i=0; i<n; i++){
            if(manager[i] == -1) continue;
            int root = manager[i];
            int child = i;
            adj[root].push_back(child);
        }   
        return DFS(adj,headID,0,informTime);                  
    }
};
