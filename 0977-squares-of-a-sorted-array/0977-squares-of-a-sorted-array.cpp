#include<bits/stdc++.h>
class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> v;
        for(int i=0;i<nums.size();i++){
            int k = nums[i] * nums[i];
            v.push_back(k);
        }
        sort(v.begin(),v.end());
        return v;
    }
};