class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int z=-1;
        for(int i=0;i<n;i++){
            if(nums[i]!= i){
           z=i;
                break;
            }
        }
        if(z==-1) return n;
        else return z;
    }
};