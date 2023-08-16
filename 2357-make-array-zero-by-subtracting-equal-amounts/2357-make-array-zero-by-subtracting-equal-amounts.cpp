class Solution {
public:
    int minimumOperations(vector<int>& nums) 
    {
        sort(nums.begin(),nums.end());             // arrange the values in increasing order
        int operation=0;                           // for counting the total min operation
        
        int n=nums.size();
        for(int i=0;i<n;i++)                       // iterate over the array
        {
            if(nums[i]>0)                          // if value is greater than 0 only then go for substraction
            {
                int tmp = nums[i];                 // store curr value in tmp variable
                operation++;                       // increase the operation count for current operation

                for(int j=i;j<n;j++)               // check the remaining values and substract the curr value from those
                {
                    nums[j] = nums[j]-tmp;
                }
            }
            
        }
        
        // final ans
        return operation;
    }
};