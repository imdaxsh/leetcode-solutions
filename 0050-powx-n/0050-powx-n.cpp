class Solution {
public:
     double myPow(double x, int n) {

//        // solution 1
    // solution one doesn't works 
//         double ans = 1.0 ;
        
//         for(int i=1 ;i <=abs(n) ;i++){
            
//             ans = ans*x;
//         }
        
//         if(n<0)
//             ans = 1/ans ;
        
        
//         return ans;
        
//         // solution 2
        return (double) pow(x,n);       // using STL function // only one line code
     }
  
};