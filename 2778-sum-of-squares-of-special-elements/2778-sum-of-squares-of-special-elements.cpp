class Solution {
public:
    int sumOfSquares(vector<int>& nums) {
        int a = nums.size();
          int x =nums[0]*nums[0] + nums[a-1]*nums[a-1];
        int count= x;
        if(a==1){
            return nums[0]*nums[0];
        }
        else 
        
        for(int i=1;i<a-1;i++){
            if(a%(i+1)==0){
                count += nums[i]*nums[i];
            }
        }
        return count;
    }
};