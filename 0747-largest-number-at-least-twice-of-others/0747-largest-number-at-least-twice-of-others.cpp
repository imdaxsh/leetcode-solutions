class Solution {
public:
   int dominantIndex(vector<int>& nums) {
        int mx = 0, ans = 0;
        for(int i = 0; i < nums.size(); i++)
            if(mx < nums[i]) mx = nums[i], ans = i; 
			
        for(int i = 0; i < nums.size(); i++)
            if(mx < nums[i] * 2 && ans != i) return -1;
        return ans;
    }
};