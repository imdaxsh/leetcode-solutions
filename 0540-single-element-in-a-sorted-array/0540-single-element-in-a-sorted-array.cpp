class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
         int xOR=0;  //a^a = 0. So all the elements repeating twice become '0' and we return the non-repeating element.
        for(int i=0;i<nums.size();i++) xOR ^= nums[i];
        
        return xOR;
    }
};