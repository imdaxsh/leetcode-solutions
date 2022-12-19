//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    int minimumCost(vector<vector<int>>&e, int n, int k) {
        vector<int>dist(n+1,1e9+7);
        vector<pair<int,int>>g[n+1];
        for(auto it:e){
            g[it[0]].push_back({it[1],it[2]});
        }
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>q;
        q.push({0,k});
        dist[k]=0;
        while(!q.empty()){
            int u=q.top().second;
            int w=q.top().first;
            q.pop();
            if(dist[u]<w)continue;
            for(auto it:g[u]){
            int to=it.first;
            int w=it.second;
            if(dist[to]>(dist[u]+w)){
                dist[to]=dist[u]+w;
                q.push({dist[to],to});
            }
            }
        }
        int mn=-1;
        for(int i=1;i<=n;i++){
            if(dist[i]>=1e9+7)return -1;
            mn=max(dist[i],mn);
        }
        return mn;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        int size;
        cin >> size;
        vector<vector<int>> flights(size,vector<int>(3));
        for (int i = 0; i < size; i++) {
            vector<int> temp;
            for (int j = 0; j < 3; ++j) {
                int x;
                cin >> x;
                temp.push_back(x);
            }
            flights[i]=temp;
        }

        Solution ob;
        cout << ob.minimumCost(flights, n, k) << "\n";
    }
}

// } Driver Code Ends