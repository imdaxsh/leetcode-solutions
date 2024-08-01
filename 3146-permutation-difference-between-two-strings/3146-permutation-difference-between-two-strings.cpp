class Solution {
public:
    int findPermutationDifference(string s, string t) {
        int count(0);
        
        for(int i=0;i<s.size();i++){
            char z=s[i];
                for(int j=0;j<t.size();j++){
             if(z==t[j]){
                 count+=abs(i-j);
             }
                }
            }
        return count;
    }
    
};