class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr) {
//         int l=0;
//         int i =0;
//        while(i<arr.size())
//         {
//             if(arr[i] %3==0 && arr[i+1]%3==0 && arr[i+2]%3 == 0)
//           {  
//                 l = 1;
//             break;
//             }
            
//           i++;  
//         }
//         return l;
        
            if(arr.size()<3){
            return false;
        }
        for(int i=2;i<arr.size();i++){
            if(arr[i]%2!=0 && arr[i-1]%2!=0 && arr[i-2]%2!=0){
                return true;
            }
        }
        
  return false;  
    
    } 
    
};