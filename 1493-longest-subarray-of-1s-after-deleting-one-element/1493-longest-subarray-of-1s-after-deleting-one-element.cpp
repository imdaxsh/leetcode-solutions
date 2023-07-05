class Solution {
public:
    int longestSubarray(vector<int>& nums) {
//         vector<int> v;
//         int a;
//         int count=0;
//         for(int i=0;i<nums.size();i++){
// if(v[i]==0){
//     v.push_back(i);
//     count++;
// }
            
//         }
//        if(count ==1){
// return nums.size()-1;
//        }else
//        {
//            for(int i=0;iv.size();i++){
               
//                 a = v[i]-v[i+1];
           
//            }
         
//        }
        
        
         int i=0;
        int j=0;
        int n=nums.size();
        int c0=0;
        int mx=0;
        while(j<n){
         if(nums[j]==0){
             c0++;
         }
         while(i<n&&c0==2){
             if(nums[i]==0){
                 c0--;
             }
             i++;
         }
         mx=max(j-i,mx);
         j++;
        }
        return mx;
    }
};