class Solution {
public:
    //Central node will give minimum height so centroid will give the minimum height.
    //centroid will be max of 2 as 3 will form a cycle and tree does not have any cycle.
    vector<int> findMinHeightTrees(int n, vector<vector<int>>& edges) {
        vector<int> mht;
        if(n == 0)
            return mht;
        if(n == 1) {
            mht.push_back(0);
            return mht;
        }
        vector<vector<int>> graph(n);
        for(int i = 0; i < edges.size(); i++) {
            int x = edges[i][0];
            int y = edges[i][1];
            graph[x].push_back(y);
            graph[y].push_back(x);
        }
        vector<int> degree(n);
        queue<int> q;
        for(int i = 0; i < n; i++) {
            degree[i] = graph[i].size();
            if(degree[i] == 1)
                q.push(i);
        }
        // for(auto i : degree)
        //     cout<<i;
        int count = n;
        while(count > 2) {
            int s = q.size();
            count -= s;
            while(s--) {
                int x = q.front();
                q.pop();
                vector<int> con = graph[x];
                auto itr = find(graph[con[0]].begin(),graph[con[0]].end(),x);
                if(itr != graph[con[0]].end())
                    graph[con[0]].erase(itr);
                degree[con[0]] -= 1;
                if(degree[con[0]] == 1)
                    q.push(con[0]);
            }
        }
        while(!q.empty()) {
            int x = q.front();
            mht.push_back(x);
            q.pop();
        }
        return mht;
    }
};