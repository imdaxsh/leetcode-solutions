class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        
        vector<pair<int, string>> a;
        
        int N= names.size();
        
        for(int i=0;i<N;i++){
            a.emplace_back(heights[i] , names[i]);
        }
        sort(a.rbegin(),a.rend());

        for(int i = 0; i < N; i++) {
	names[i] = a[i].second;
}
return names;
        
        
        
    }
};