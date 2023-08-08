class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        vector<int> ans;
        
//         for(int i=0;i<nums.size();i++){

//             if(nums[i]%10 == nums[i]){
//               int k = (nums[i]%10);
//             int l(nums[i]/10);
//             ans.push_back(l);
//             ans.push_back(k);   
//             }
//             else
//           { do{ 
//             int k = (nums[i]%10);
//             int l(nums[i]/10);
//             ans.push_back(l);
//             ans.push_back(k);
//                nums[i]/=10;
//             }while(nums[i]=0);
            
//             }
//         }
//         return ans;
        
         for(int i=0;i<nums.size();i++){
            vector<int> temp;//The temporary vector used for storing digits of current number
            int j=nums[i];//j is current number
            while(j>0){
                temp.push_back(j%10);//storing digits in temporary vector
                j=j/10;
            }
            
            for(int i=temp.size()-1;i>=0;i--){
                ans.push_back(temp[i]);//Inserting the digits from temporary vector to answer vector
            }
        }
        return ans;
    }
};