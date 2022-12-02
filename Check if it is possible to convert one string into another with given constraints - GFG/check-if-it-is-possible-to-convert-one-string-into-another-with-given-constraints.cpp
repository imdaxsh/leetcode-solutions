//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int isItPossible(string S, string T, int M, int N) {
        // code here
         if(M!=N) return false;

        if(("###B"==S and "B###"==T) || ("A###"==S and "###A"==T) || ("AA#"==S and "A#A"==T)) return 0;

        string s1="",s2="";

        for(auto i : S)

        {

            if(i!='#')

            s1+=i;

        }

        for(auto i : T)

        {

            if(i!='#')

            s2+=i;

        }

      return s1==s2;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string S, T;
        cin >> S >> T;
        int M = S.length(), N = T.length();
        Solution ob;
        cout << ob.isItPossible(S, T, M, N);
        cout << "\n";
    }
}
// } Driver Code Ends