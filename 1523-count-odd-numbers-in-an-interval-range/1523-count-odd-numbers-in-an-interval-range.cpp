class Solution {
public:
    int countOdds(int low, int high) {
        int k = (high-low)/2;
        if(high%2!=0 || low%2!=0){
            k+=1;
        }
        return k;
    }
};