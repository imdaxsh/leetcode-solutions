class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string ans= "";
        
        int n = word1.size();
        int m = word2.size();
        int p = max(n,m);
        for(int i=0;i<p;i++){
            if(n){
                ans += word1[i];
                n--;
            }
            
            if(m){
                ans += word2[i];
                m--;
            }
            
        }
        return ans;
    }
};