//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    int checkCompressed(string S, string T) {
         int n=S.size(),n1=T.size(),i,j=0;
        for(i=0;i<n;i++){
            if(T[j]>='0' && T[j]<='9'){
                int num=0;
                while(T[j]>='0' && T[j]<='9'){
                    num=num*10+(T[j]-'0');
                    j++;
                }
                i+=(num-1);
                if(i>=n || (i==n-1 && j<n1))return 0;
            }
            else if(S[i]!=T[j]){
                return 0;
            }
            else j++;
        }
        return 1;
        // code here
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string S,T;
        
        cin>>S>>T;

        Solution ob;
        cout << ob.checkCompressed(S,T) << endl;
    }
    return 0;
}
// } Driver Code Ends