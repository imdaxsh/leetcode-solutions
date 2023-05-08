//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
        int modulo(string s,int m)
        {
            //code here
    // int dec_num = 0 ;
    //   int power = 0 ;
    //   while(n>0){
    //   if(n%10 == 1){ // extracting the last digit
    //     dec_num += (1<<power) ;
    //   }
    //   power++ ; 
    //   n = n / 10 ;
    // }
    //   //return dec_num ;
    // return (dec_value % m );
      int mul=1;
            int ans=0;
            
            int j=0;
            for(int i=s.length()-1;i>=0;i--)
            {
                mul=mul%m;
                
                ans+= mul*(s[i]=='1'?1:0);
                    ans%=m;
                
                mul*=2;
                
            }
            return ans;
        }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        int m;
        cin>>s>>m;
        Solution a;
        cout<<a.modulo(s,m)<<endl;
    }
    return 0;
}
// } Driver Code Ends