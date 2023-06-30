class Solution {
public:
    int alternateDigitSum(int n) {
     // string s = to_string(n);
     //    int count =0;
     //    for(int i=0;i<=s.size();i++){
     //        if(i%2==0){
     //            count+=s[i];
     //        }else{ count -= s[i];}
     //    }
     //    return count;
        
         int sum = 0;
        bool flag = true;
        // convert the number to a string so that we can
        // iterate through the string from both the sides
        string num = to_string(n);
        for(int i=0; i<num.size(); i++) {
            // subtract the characters (ASCII values)
            // and obtain the integer number 
            if(flag) {
                sum = sum + (num[i] - '0');
                flag = false;
            } else {
                sum = sum - (num[i] - '0');
                flag = true;
            }
            // int flag = 1;
            // flag = 1 - flag;
        }
        return sum;
    }
};