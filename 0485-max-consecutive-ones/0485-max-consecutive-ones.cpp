class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count=0;
        int onecount=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]==1){
                count++;
            }
            else{
                onecount=max(onecount,count);
                count=0;
            }
        }
        return max(onecount,count);
    }
};