class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        int count =0;
        int n= nums.size();
        vector<int> ans;
        for(int i=0;i<n;i++){
            for(int j= 0;j<n;j++){
                if(nums[i]>nums[j]){
                    count++;
                }
                
              
            }
            
             ans.push_back(count);
            count =0;
        }
        return ans;
    }
};