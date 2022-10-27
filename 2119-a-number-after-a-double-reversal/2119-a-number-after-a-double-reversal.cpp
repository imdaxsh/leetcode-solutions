class Solution {
public:
    bool isSameAfterReversals(int num) {
        if(num == 0){  //Edge Case 
            return true;
        }
        if( num % 10 == 0){  // number should not contain 0 at ones place
            return false;
        }
        else{
            return true;
        }    
    }
};