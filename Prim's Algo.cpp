    //Function to find sum of weights of edges of the Minimum Spanning Tree.
    // E --> total edges
    int spanningTree(int V, vector<vector<int>> adj[])
    {
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
        
        vector<int> vis(V, 0);
        int sum = 0;
        
        pq.push({0, 0});
        // E log E + E lgo E
        while(!pq.empty())
        {
            // log E
            auto it = pq.top();
            pq.pop();
            int node = it.second;
            int wt = it.first;
            
            if(vis[node] == 1)
            {
                continue;
            }
            sum += wt;
            vis[node] = 1;
            
            // E log E
            for(auto it : adj[node])
            {
                int adjNode = it[0];
                int edgeWeight = it[1];
                if(!vis[adjNode])
                {
                    pq.push({edgeWeight, adjNode});
                }
            }
        }
        return sum;
    }
