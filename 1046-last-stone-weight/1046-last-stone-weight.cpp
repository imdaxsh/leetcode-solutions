class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
         while(stones.size() > 1){
            sort(stones.begin(),stones.end(),greater<int>());
            if(stones[0] == stones[1])
                stones.erase(stones.begin(),stones.begin()+2);
            else{
                stones.push_back(abs(stones[0] - stones[1]));
                stones.erase(stones.begin(),stones.begin()+2);         
            }
        }
        if(!stones.empty())
            return stones[0];
        return 0;
    
//         int lastStoneWeight(vector<int>& s) {
//         int n = s.size();
//       while(n > 1){
//             sort(s.begin(),s.end());
//             if(s[n-1] == s[n-2])
//                 s.erase(s.end()-2, s.end());
            
        
//             else{
//                 s.push_back(abs(s[n-1]-s[n-2]));
//                 s.erase(s.end()-2,s.end());
//             }
//         }
//             if(!s.empty())
//             return s[0];
//         return 0;
        
    }
    
};