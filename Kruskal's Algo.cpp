
class disjointSet 
{
    vector<int> rank, parent, size;

public:
    disjointSet(int n) 
    {
        rank.resize(n + 1, 0);
        parent.resize(n + 1);
        size.resize(n + 1);
        // for 1 based indexing
        for (int i = 0; i <= n; i++)
        {
            parent[i] = i;
            size[i] = 1;
        }
    }

    int findUPar(int node) 
    {
        if (parent[node] == node)
        {
            return node;
        }
        // parent[node] = --> path compression
        return parent[node] =  findUPar(parent[node]);
    }

    void unionByRank(int u, int v)
    {
        int ulp_u = findUPar(u);
        int ulp_v = findUPar(v);
        // if belonging to the same component, no need
        if (ulp_u == ulp_v)
        {
            return;
        }
        if (rank[ulp_u] < rank[ulp_v])
        {
            parent[ulp_u] = ulp_v;
        }
        else if (rank[ulp_u] > rank[ulp_v])
        {
            parent[ulp_v] = ulp_u;
        }
        // if both u and v has the same rank
        else {
            parent[ulp_v] = ulp_u;
            rank[ulp_u]++;
        }
    }

    void unionBySize(int u, int v)
    {
        int ulp_u = findUPar(u);
        int ulp_v = findUPar(v);
        // if belonging to the same component, no need
        if (ulp_u == ulp_v)
        {
            return;
        }
        if (size[ulp_u] < size[ulp_v])
        {
            parent[ulp_u] = ulp_v;
            size[ulp_v] += size[ulp_u];
        }
        else {
            parent[ulp_v] = ulp_u;
            size[ulp_u] += size[ulp_v];
        }
    }
};

class Solution
{
    // Auxillary space --> DSU 2 * O(M) + O(M)
    public:
    //Function to find sum of weights of edges of the Minimum Spanning Tree.
    int spanningTree(int V, vector<vector<int>> adj[])
    {
        vector<pair<int, pair<int, int>>> edges;
        // O(V + E)
        for(int i=0; i<V; i++)
        {
            for(auto it : adj[i])
            {
                int adjNode = it[0];
                int wt = it[1];
                int node = i;
                
                // adds the edges twice
                // but dsu dicards them, so cool
                edges.push_back({wt, {node, adjNode}});
            }
        }
        disjointSet ds(V);
        // M --> edges
        // M log M
        sort(edges.begin(), edges.end());
        int mstWt = 0;
        // M * 4 * alpha * 2
        for(auto it : edges)
        {
            int wt = it.first;
            int u = it.second.first;
            int v = it.second.second;
            
            // belong to the same component?
            if(ds.findUPar(u) != ds.findUPar(v))
            {
                mstWt += wt;
                ds.unionBySize(u, v);
            }
        }
        return mstWt;
    }
};
