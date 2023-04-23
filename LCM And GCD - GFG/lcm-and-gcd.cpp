//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    vector<long long> lcmAndGcd(long long A, long long B) {
        // code here
//   vector<long long>answer;
//     long long ans =0;
// for(long long i=1;i<=min(a,b);i++){
//     if(a%i == 0 && b %i == 0){
//       ans = i;
//     } 
// }

//   answer.push_back((a/ans)*b);  
//   answer.push_back(ans);
//   return answer;
     long long gc = __gcd(A,B);
     long long lc = (A*B)/gc;
     return {lc,gc};
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long A,B;
        
        cin>>A>>B;

        Solution ob;
        vector<long long> ans = ob.lcmAndGcd(A,B);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}
// } Driver Code Ends