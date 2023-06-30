class Solution {
public:
    int averageValue(vector<int>& nums) {
        int count=0;
        int l=0;
        for(int i=0;i<nums.size();i++){
            
            if(nums[i]%3==0 && nums[i]%2==0){
                count += nums[i];
                l++;
            } 
        }
        if(count ==0) return 0;
        return count/l;
    }
};