//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function Template for C++
class Solution
{
public:
    long long sumOfDivisors(int N)
    {
     
        // Write Your Code here
    //     int prev =0;
    //     int curr =0;
    //  for(int i=1;i<=N;i++){
    //      prev=prev+i;
    //      curr+=prev;
    //  }
    //  return curr;
     long sum = 0;
        for(int i=1;i<=N;i++)
        {
            int div = N/i;
            sum = sum + div*i;
        }
        return sum;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin>>N;
        Solution ob;
        long long ans  = ob.sumOfDivisors(N);
        cout<<ans<<endl;
    }
    return 0;
}
// } Driver Code Ends