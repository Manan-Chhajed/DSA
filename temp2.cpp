/* Manan Chhajed */

#include <bits/stdc++.h>
using namespace std;

#define fast_io() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

// time complecity of both unionByRank and unionBySize is O(4 alpha)

// works for both 0 based as well as 1 based indexing
// why? think...
class disjointSet {
    vector<int> rank, parent, size;

public:
    disjointSet(int n) {
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

    int findUPar(int node) {
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

void init_code() {
    fast_io();
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    freopen("error.txt", "w", stderr);
#endif
}

int32_t main()
{
    init_code();

    disjointSet ds(7);
    ds.unionBySize(1, 2);
    ds.unionBySize(2, 3);
    ds.unionBySize(4, 5);
    ds.unionBySize(6, 7);
    ds.unionBySize(5, 6);

    // if 3 and 7 same component or not
    if (ds.findUPar(3) == ds.findUPar(7))
    {
        cout << "Same" << "\n";
    }
    else {
        cout << "Not Same" << "\n";
    }

    ds.unionByRank(3, 7);

    if (ds.findUPar(3) == ds.findUPar(7))
    {
        cout << "Same" << "\n";
    }
    else {
        cout << "Not Same" << "\n";
    }
    return 0;
}