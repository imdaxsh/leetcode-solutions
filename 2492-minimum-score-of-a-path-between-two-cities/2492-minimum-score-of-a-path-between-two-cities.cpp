class Solution {
public:
     int mini = INT_MAX;
    
    void dfs(int s, vector<bool>&vis, vector<pair<int, int>>adj[]) {
        vis[s] = true;
        
        for(auto &it : adj[s]) {
            int v = it.first, wt = it.second;
            mini = min(mini, wt);
            if(!vis[v])
                dfs(v, vis, adj);
        }
    }
    
    int minScore(int n, vector<vector<int>>& roads) {
        vector< pair<int, int> > adj[n+1];
        for(auto &it : roads) {
            int u = it[0], v = it[1], wt = it[2];
            adj[u].push_back({v, wt});
            adj[v].push_back({u, wt});
        }
        
        vector<bool>vis(n+1, false);
        dfs(1, vis, adj);
        
        return mini;
    }
};