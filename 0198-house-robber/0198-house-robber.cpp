 // RUNTIME ERROR 
//         int prev =0;
        
//         for(int i=0;i<nums.size();i+2){
//             curr += nums[i];
//         }
        
//         for(int j=1;j<nums.size();j+2){
//             prev += nums[j];
//         }
        
//         if(curr >= prev) return curr;
//         return prev;


class Solution {
public:
    int rob(vector<int>& nums) {
        int n=nums.size();
        vector<int> dp;
        dp.push_back(0);
        dp.push_back(nums[0]);
        int pmax=0;
        
        for(int i=1; i<n; i++)
        {
            int x=dp.size();
            
            if(nums[i]+pmax > dp[x-1])
            {
                dp.push_back(nums[i]+pmax);
                pmax = max(pmax, dp[x-1]);
            }
            else
            {
                pmax = max(pmax, dp[x-1]);
            }
        }
        
        return dp[dp.size()-1];
    }
};


    