class Solution {
public:
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
       vector<int> ans;
        
    //     for(int i=0;i<nums.size();i++){
    //     index[i] = nums[i];    
    //     ans.push_back(nums[i]);
    //     }
    // return ans;
               vector<int> result;
        for(int i=0;i<index.size();++i)
            result.insert(result.begin()+index[i],nums[i]);
        return result;
    }
    
};