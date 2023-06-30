class Solution {
public:
    int findGCD(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int z=nums.size();
        int min =nums[0];
        int max=nums[z-1];
          for(int i = min; i >= 1; i--)
        {
			// finding greatest common divisor (GCD) of max, min.
            if((min % i == 0) && (max % i == 0)) return i;
        }
        return 1;
    }
};