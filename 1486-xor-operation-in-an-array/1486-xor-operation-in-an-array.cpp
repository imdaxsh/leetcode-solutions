class Solution {
public:
    int xorOperation(int n, int start) {
        
           int i=0;
        int xor_result=0;
        while(i<n){
            xor_result^=start+2*i;
            i++;
        }
        return xor_result;
    }
};