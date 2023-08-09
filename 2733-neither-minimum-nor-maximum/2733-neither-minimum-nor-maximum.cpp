class Solution {
public:
    int findNonMinOrMax(vector<int>& nums) {
        int z =nums.size();
        
        if(z<=2){
            return -1;
        }
        else{
           sort(nums.begin(),nums.end());
           
            return nums[1];}
    }
};