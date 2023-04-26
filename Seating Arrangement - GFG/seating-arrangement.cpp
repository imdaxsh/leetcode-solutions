//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    bool is_possible_to_get_seats(int n, int m, vector<int>& seats){
    // Write your code here.
    //     int count =0;
    //     sort(seats.begin(),seats.end());
    //     for(int i =0 ;i<seats.size();i++){
    //         if(seats[i] == 1){
    //             count += 1;
    //         }
    //     }
    //     return count ;
    //     int z = abs(m-count);
    //     if(z/2 > n){
    //       return "YES" ;
    //     }
    //     else
    // return "NO";
    
       for(int i=0; i<m; i++)
        {
            if(seats[i] == 0)
            {
                if((i-1<0 || seats[i-1]==0) && (i+1>=m || seats[i+1]==0))
                {
                    n--;
                    seats[i] = 1;
                }
            }
        }
        
        return n <= 0;
}
};

//{ Driver Code Starts.

int main(){

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int m;
        cin >> m;
        vector<int> seats(m);
        for (int i = 0; i < m; i++) {
            cin >> seats[i];
        }
        Solution obj;
        if (obj.is_possible_to_get_seats(n, m, seats)) {
            cout << "Yes" << endl;
        }
        else {
            cout << "No" << endl;
        }
    }
}

// } Driver Code Ends