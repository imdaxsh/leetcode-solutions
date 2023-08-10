class Solution {
public:
    vector<int> sortEvenOdd(vector<int>& nums) {
        int     minIndex;
//         for(inti=0;i<nums.size();i+2){
//             if(nums[i] )
//         }
        
//         for(int i=1;i<nums.size();i+2){
//             if(nums[i])
//         }
        
          for(int i=0;i<nums.size();i+=2)
        {
            minIndex=i;
            for(int j=i+2;j<nums.size();j+=2)
            {
                if(nums[j]<nums[minIndex])
                    minIndex=j;
            }
            swap(nums[i],nums[minIndex]);
        }
// Here , we are trying to sort the elements at odd indices in non-increasing order. 
        for(int i=1;i<nums.size();i+=2)
        {
            minIndex=i;
            for(int j=i+2;j<nums.size();j+=2)
            {
                if(nums[j]>nums[minIndex])
                    minIndex=j;
            }
            swap(nums[i],nums[minIndex]);
        }
        
        return nums;
    }
};