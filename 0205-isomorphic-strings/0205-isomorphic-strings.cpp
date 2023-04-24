class Solution {
public:
    bool isIsomorphic(string s, string t) {
         map<char,char> mp,mp1;
        int i=0,j=0;
        while(i<s.length() && j<t.length()){
            if(!mp.count(s[i]) && !mp1.count(t[j])){
                mp[s[i]]=t[j];
                mp1[t[j]]=s[i];
            }else{
                if(mp[s[i]]!=t[j] || mp1[t[j]]!=s[i]) return false;
            }
            i++;j++;
        }
        return true;
    }
};