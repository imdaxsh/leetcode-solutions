class Solution {
public:
    int alternateDigitSum(int n) {
     string s = to_string(n);
        int count =0;
        bool flag=true;
        for(int i=0;i<s.size();i++){
            if(flag){
                count+=(s[i]- '0');
                flag = false;
            }else{ count -= (s[i]- '0');
                 flag=true;
                 }
        }
        return count;
    }
};