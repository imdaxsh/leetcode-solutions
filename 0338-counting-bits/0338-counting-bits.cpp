class Solution {
public:
    vector<int> countBits(int n) {
//         vector<int>  ans;
//         ans.push_back(0);
//         if(n == 0 ){
//            return ans;
//         }
//         else{
//             for(int i=1;i<=n;i++){
//              if(n%2==0){
//  ans.push_back(1);
//                  }
//                 else {
// ans.push_back((n/2)+1);
//                 }
//         }
//     }
//         return ans;
        
        
         vector<int> ans(n + 1);
    ans[0] = 0;
    for (int i = 1; i <= n; i++) {
      ans[i] = ans[i / 2] + (i % 2);
    }
    return ans;
    }
};