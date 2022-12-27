//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;
// int maxArea(int A[], int len);

// } Driver Code Ends
//User function template for C++

long long maxArea(long long A[], int len)
{
    // Your code goes here
      int left=0;

    int right=len-1;

    int max_area=INT_MIN;

    while (left<=right)

    {

        int area=0;

        if (A[left]>=A[right])

        {

            area =(right-left)*A[right];

            max_area=max(max_area,area);

            right--;

        }

        else

        {

            area=(right-left)*A[left];

            max_area=max(max_area,area);

            left++;

        }

    }

    return max_area;
}

//{ Driver Code Starts.

// Driver code
int main()
{
	int t;
	cin>>t;
	while(t--)
    {
        int n;
        cin>>n;
        long long arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        cout<<maxArea(arr,n)<<endl;
    }
return 0;
}

// } Driver Code Ends