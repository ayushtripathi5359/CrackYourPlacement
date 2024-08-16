 vector<int> bfsOfGraph(int V, vector<int> adj[]) {
        // Code here
        vector<int> ans, vis(V, 0);
        queue<int> q;
        q.push(0);
        vis[0]=1;
        while(!q.empty())
        {
            int front= q.front();
            q.pop();
            ans.push_back(front);
            for(auto &it : adj[front])
            {
                if(!vis[it])
                {
                    q.push(it);
                   
                    vis[it]=1;
                }
                 
            }
        }
        return ans;
    }
