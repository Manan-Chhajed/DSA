/* 
  - Only for directed graphs
  - Connected component --> every node reachable from every other node
  
  - Kosaraju's algo
    - Sort all edges according to finishing time
    - Reverse the graph
    - Do a DFS
*/
class Solution
{
    private:
    void dfs(int u, vector<vector<int>>& adj, vector<int>& vis, stack<int>& st)
    {
        vis[u] = 1;
        for(auto v : adj[u])
        {
            if(!vis[v]) dfs(v, adj, vis, st);
        }
        st.push(u);
    }
    void dfs(int u, vector<int> adjT[], vector<int>& vis)
    {
        vis[u] = 1;
        for(auto v : adjT[u])
        {
            if(!vis[v]) dfs(v, adjT, vis);   
        }
    }
	public:
    int kosaraju(int V, vector<vector<int>>& adj)
    {
        stack<int> st;
        vector<int> vis(V, 0);
        for(int i=0; i<V; i++)
        {
            if(!vis[i]) dfs(i, adj, vis, st);
        }
        vector<int> adjT[V];
        for(int i=0; i<V; i++)
        {
            for(auto v : adj[i])
            {
                adjT[v].push_back(i);
            }
        }
        int cnt = 0;
        while(!st.empty())
        {
            int node = st.top();
            st.pop();
            if(!vis[node])
            {
                dfs(node, adjT, vis);
                cnt++;
            }
        }
        return cnt;
    }
};
