//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int arrayOperations(int n, vector<int> &arr) {
        int count=0,flag = 1,flag2 = 0;
        for(int i=0;i<n;i++){
            if(arr[i] != 0){
                if(flag == 1){
                    count++;
                    flag = 0;
                }
            }else{
                flag = 1;
                flag2 = 1;
            }
        }
        if(flag2 == 0) return -1;
        return count;
    }
};


//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        
        int n;
        cin>>n;
        
        
        vector<int> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        
        Solution obj;
        int res = obj.arrayOperations(n, arr);
        
        cout<<res<<endl;
        
    }
}

// } Driver Code Ends