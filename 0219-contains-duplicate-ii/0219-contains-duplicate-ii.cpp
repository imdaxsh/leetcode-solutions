class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        //  sort(nums.begin(),nums.end());
        // int count =0;
        // for(int i=0;i<nums.size()-1;i++){
        //   for(int j=i+1;j<nums.size();j++){
        //       if(abs(nums[i]-nums[j])<=k){ count++;}
        //   }
        // }
        // if(count>=2) {return true;}
        // else {return false;}
        
        
           unordered_map<int,int> result;
        for(int i=0;i<nums.size();i++)
        {
            if(result.find(nums[i])!=result.end())
            {
                if(abs(result[nums[i]]-i)<=k)
                {
                    return true;
                }
            }
            result[nums[i]]=i; //if the diff is not <=K we will assign the new index to the map(result here)
        }
        return false;
    }
};