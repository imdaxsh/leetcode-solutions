class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
//         int n =numbers.size();
//         vector<int> ans;
        
//         for(int i=0; i <n-1 ; i++){
//             for(int j=i+1;j<n;j++){
//                 int z = target - numbers[i];  
//                  ans.push_back(i+1);
//                 if(z == numbers[j]){
                   
//                     ans.push_back(j+1);
//                 }
             
//               j++; 
                
//             }
//               return ans ;
//             ans.pop_back();
//             i++;
          
//         }
//         return ans;
        
        int low =0 , high = numbers.size()-1;
        
        vector<int> ans;
        
        while(low<high){
            if(numbers[low] + numbers[high] == target){
                ans.push_back(low+1);
                ans.push_back(high+1);
                return ans;
            }
            
              else if(numbers[low] + numbers[high] > target)
                high--;
            else
                low++; 
        }
        return ans;
        }
    
};