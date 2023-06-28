class Solution {
public:
    int findDelayedArrivalTime(int a, int d) {
       int total =  a+d;
        
        if(total == 24){
            return 0;
        }
        else if(total > 24){
            return total-24;
        }
        else return total;
    }
};