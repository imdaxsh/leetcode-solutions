class Solution {
public:
    long long power(long long x, long long y, long long p = 1000000007)
    {
        long long res = 1;
 
        x = x % p;
  
        if (x == 0) return 0;
 
        while (y > 0)
        {
            if (y & 1)
                res = (res*x) % p;
            y = y>>1;
            x = (x*x) % p;
        }
        return res;
    }
    
    long long countGoodNumbers(long long n) {
        
        long long x = power(5, (n + 1) / 2);
        long long y = power(4, n / 2);
        long long ans = (x * y) % 1000000007;
        return ans;
        
        
    }
};