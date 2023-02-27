class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int n =0;
        int z= accumulate(nums.begin() ,nums.end() , n);
  
        int count =0;
        
        for(int i=0;i<nums.size();i++){
            int k = nums[i] ;
            while(k != 0) {
                int d = k%10;
            k = k / 10;
           count =count + d;
   }
           
        }
        
        return abs(z-count);
    }
};