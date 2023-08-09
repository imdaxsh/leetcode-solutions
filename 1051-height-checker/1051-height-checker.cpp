class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int>v;
        for(int i=0;i<heights.size();i++){
v.push_back(heights[i]);
        }
        
        int count =0;
        sort(v.begin(),v.end());
        for(int i=0;i<v.size();i++){
            if(heights[i] != v[i]){
                count++;
            }
        }
        return count;
    }
};