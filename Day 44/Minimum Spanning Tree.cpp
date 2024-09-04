typedef vector<int> vi;
    
    int spanningTree(int V, vector<vector<int>> adj[])
    {
        // Prim's Algorithm
        priority_queue<vi, vector<vi>, greater<vi>> pq; // weight, node, parent
        vi vis(V,0); // visited array
        pq.push({0, 0, -1});
        int sum = 0;
        // vector<pair<int, int>> mst;
        while(!pq.empty()){
            auto it = pq.top();
            pq.pop();
            int wt = it[0] , node =it[1] , parent= it[2];
            if(vis[node]) continue;
            vis[node]=1;
            sum += wt;
            // if(parent !=-1) mst.push_back({node, parent});
            for(auto i : adj[node]){
                int adjnode = i[0], adjwt = i[1];
                if(!vis[adjnode]){
                    pq.push({adjwt, adjnode, node});
                }
            }
            
            
        }

        return sum;
    }
