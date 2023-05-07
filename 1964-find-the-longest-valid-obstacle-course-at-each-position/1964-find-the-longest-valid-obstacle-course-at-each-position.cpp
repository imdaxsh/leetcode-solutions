class Solution {
public:
       vector<int> longestObstacleCourseAtEachPosition(vector<int>& obs) {
        int n=obs.size();
        vector<int> ans(n,1),a;
        for(int i=0; i<n; i++) {
            int x=upper_bound(a.begin(),a.end(),obs[i])-a.begin();
            if (x==a.size()) a.push_back(obs[i]);
            else a[x]=obs[i];
            ans[i]=x+1;
        }
        return ans;   
    }
};