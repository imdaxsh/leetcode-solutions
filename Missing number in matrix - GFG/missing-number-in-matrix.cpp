//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
public:
    long long int MissingNo(vector<vector<int> >& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        vector<vector<long long int>> vec(n, vector<long long int>(m));
        
        for(int i=0; i<n; i++) {
            for(int j=0; j<m; j++) {
                vec[i][j] = (long long int)matrix[i][j];
            }
        }
        
        
        int r = -1, c = -1;
        
        for(int i=0; i<n; i++) {
            for(int j=0; j<m; j++) {
                if(matrix[i][j] == 0) {
                    r = i;
                    c = j;
                }
            }
        }
        
        long long int s1 = 0;
        for(int i=0; i<m; i++) {
            s1 += (long long int )matrix[r][i];
        }
        
        int r1 = (r+1)%n;
        
        long long int sum = 0;
        for(int i=0; i<m; i++) {
            sum += (long long int)matrix[r1][i];
        }
        
        long long int mis = sum - s1;
        vec[r][c] = mis;
        
        for(int i=0; i<n; i++) {
            long long int s3 = 0;
            for(int j=0; j<m; j++) {
                s3 += (long long int)vec[i][j];
            }
            
            if(s3 != sum) return -1;
        }
        
        for(int i=0; i<m; i++) {
            long long int s3 = 0;
            for(int j=0; j<n; j++) {
                s3 += (long long int)vec[j][i];
            }
            
            if(s3 != sum) return -1;
        }
        
        long long int s4 = 0;
        for(int i=0; i<n; i++) {
            s4 += vec[i][i];
        }
        
        if(s4 != sum) return -1;
        
        s4 = 0;
        for(int i=0; i<n; i++) {
            s4 += vec[i][n-i-1];
        }
        if(s4 != sum) return -1;
        
        
        if(mis <= 0) return -1;
        
        return mis;
        
        
        
    }
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<vector<int>> matrix(n, vector<int>(n,0));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < n; j++){
				cin >> matrix[i][j];
			}
		}
		Solution ob;
		long long int ans = ob.MissingNo(matrix);
		cout << ans <<"\n";
	}
	return 0;
}
// } Driver Code Ends