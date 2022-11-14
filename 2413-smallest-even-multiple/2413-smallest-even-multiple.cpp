class Solution {
public:
    int smallestEvenMultiple(int n) {
        int count;
        if(n%2 == 0)
            return n;
        
        count = n*2 ;
        return count ;
    }
};