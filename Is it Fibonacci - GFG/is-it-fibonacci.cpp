//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    long long solve(int N, int K, vector<long long> arr) {
        // code here
        int len= arr.size();
        if(N<=len){
         return arr[N-1];   
        } 
        
        long long sum=0;
        int i=0,j=0;
        
        while(true){
            
            sum += arr[j];
            
            if((j-i+1)==K){
                arr.push_back(sum);
                sum -= arr[i];
                i++;
            }
            if(arr.size()==N)
                return arr[N-1];
            
            j++;
      }
      
    }
};


//{ Driver Code Starts.

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N, K;
        cin >> N >> K;

        vector<long long> GeekNum(K);

        for (int i = 0; i < K; i++) cin >> GeekNum[i];

        Solution ob;
        cout << ob.solve(N, K, GeekNum) << "\n";
    }
    return 0;
}

// } Driver Code Ends