class Solution {
public:
    int numberOfPairs(vector<int>& nums1, vector<int>& nums2, int k) {
        int count(0);
        int n=nums1.size();
        int m=nums2.size();
        for(int i=0;i<n;i++){
            for(int t=0;t<m;t++){
                if(nums1[i]%(nums2[t]*k)==0){
                count++;
                }
            }
        }
        return count;
    }
};