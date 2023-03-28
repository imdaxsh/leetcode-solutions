class Solution {
public:
    int countDigits(int num) {
       int a =0;
        
        for( int i =num ;i>0;i/=10){
            a += num %(i%10) == 0;
        }
        return a;
    }
};