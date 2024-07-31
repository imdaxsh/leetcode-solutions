#include<bits/stdc++.h>
class Solution {
public:
    bool isPalindrome(int x) {
       long r=0;
       long z=x;
             if(z<0) {z*=-1;}
        while(x){
             r=r*10 +x%10;
             x=x/10;
        }
      
        
       return z==r;
   
    }
};