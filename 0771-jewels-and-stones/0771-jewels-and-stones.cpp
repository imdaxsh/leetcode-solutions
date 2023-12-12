class Solution {
public:
    int numJewelsInStones(string j, string s) {
        int ans=0;
        for(int i=0;i<j.size();i++){
            for(int k=0;k<s.size();k++){
                if(j[i]==s[k]) ans++;
            }
        }
        return ans;
    }
};