//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution{
	public:
	
	int countTriplets(vector<int>nums){
	    // Code here.
	    int count=0;
	    for(int i=0;i<nums.size();i++) {
	        int small =0;
	        for(int j=0;j<i;j++) {
	            if(nums[j]<nums[i]) 
	            small++;
	        }
	        
	        int large =0;
	        for(int k=i+1;k<nums.size();k++) {
	            if(nums[i]<nums[k])
	            large++;
	        }
	        count+=(small*large);
	    }
	    return count;
	}
	
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<int>nums(n);
		for(int i = 0; i < n; i++)cin >> nums[i];
		Solution ob;
		int ans = ob.countTriplets(nums);
		cout << ans << "\n";
	}  
	return 0;
}
// } Driver Code Ends