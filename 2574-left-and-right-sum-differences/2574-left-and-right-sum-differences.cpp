class Solution {
public:
    vector<int> leftRigthDifference(vector<int>& nums) {
        // vector<int> ans;
         int leftSum = 0, rightSum = 0, n = nums.size();
        for(int num : nums) rightSum += num;
        for(int i = 0; i < n; i++) {
            int val = nums[i];
            rightSum -= val;
            nums[i] = abs(leftSum - rightSum);
            leftSum += val;
        }
        return nums;  
    }
};