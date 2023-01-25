class Solution {
public:
    void bfs(int node , vector<int>& dist , vector<int>& vis , vector<int> adj[]){
        int d = 0;
        queue<int> q;
        q.push(node);
        while(!q.empty()){
            int n = q.size();
            while(n > 0){
                int u = q.front();
                q.pop();
                vis[u] = 1;
                dist[u] = d;
                for(auto v : adj[u]){
                    if(!vis[v]){
                        q.push(v);
                    }
                }
                n--;
            }
            d++;
        }
    }
    int closestMeetingNode(vector<int>& edges, int node1, int node2) {
        int n = edges.size();
        vector<int> adj[n];
        for(int i = 0 ; i < n ; i++){
            if(edges[i] == -1) continue;
            adj[i].push_back(edges[i]);
        }
        vector<int> vis(n , 0) , vis2(n , 0) ,dist1(n , 1e9) , dist2(n , 1e9);
        bfs(node1 , dist1 , vis , adj);
        bfs(node2 , dist2 , vis2 , adj);
        int dist = 1e9 , ans = -1;
        for(int i = 0 ; i < n ; i++){
            if(max(dist1[i] , dist2[i]) < dist){
                dist = max(dist1[i] , dist2[i]);
                ans = i;
            }
        }
        return ans;
    }
};