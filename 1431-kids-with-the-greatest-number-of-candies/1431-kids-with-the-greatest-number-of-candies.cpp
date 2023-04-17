class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> ans;
        //int max =0;
        int max = *max_element(candies.begin(), candies.end());
        // for(int i=0;i<candies.size();i++)
        // {
        //     if(candies[i]<candies[i+1] ){
        //         max = candies[i+1];
        //     }
        //     else{
        //        max=candies[i];
        //         i++ ;}
        // }
        //return max;
        
        for(int i=0;i<candies.size();i++){
            if(candies[i] + extraCandies >= max){
                ans.push_back(1);
            }
            else ans.push_back(0);
        }
        return ans;
    }
};