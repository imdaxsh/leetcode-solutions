class Solution {
public:
    int subtractProductAndSum(int n) {
         int temp = n, sum = 0, product = 1;
    while (temp != 0) {
 
        // Fetching each digit of the number
        int d = temp % 10;
        temp /= 10;
 
        // Checking if digit is greater than 0
        // and can divides n.
        
            sum += d;
            product *= d;
        
    }
 
   return product-sum;
    }
};