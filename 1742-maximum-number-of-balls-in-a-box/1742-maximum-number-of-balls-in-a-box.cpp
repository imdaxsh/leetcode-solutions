class Solution {
public:
    int digitSum (int n){
        int sum = 0;
        while(n>0){
            sum += n%10;
            n/=10;
        }
        return sum;
    }
    int countBalls(int lowLimit, int highLimit) {

      unordered_map<int, int> mp;
      while(lowLimit<=highLimit){
      int index = digitSum(lowLimit);
      mp[index]++;
      lowLimit++;
          
      }
         int max = 0;
         for(auto x:mp){
             if(x.second>max){
                 max = x.second;
             }
         }
         return max;
    }
};