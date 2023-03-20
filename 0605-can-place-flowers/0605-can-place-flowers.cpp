class Solution {
public:
//     bool canPlaceFlowers(vector<int>& f, int n) {
//         sort(f.begin(),f.end());
      
//         int m = f.size()/2;
       
//         int count =0;
//         for(int i=0;i <f.size();i++){
//             if(f[i] == 1 ){
//                 count += 1;
//             }
//             // else
//             //     i++;
//         }
//         cout << count ;
        
//         if(f.size()%2 == 0 && count + n == m || f.size()%2 != 0 && count +n == m || f.size()%2 != 0 && count +n == m+1 ){
//             return true;
//         }
//         else return false;
            
        
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int count = 0;
        
        for(int i = 0; i < flowerbed.size(); i++){
            if(flowerbed[i] == 0){
                int prev = (i == 0 || flowerbed[i - 1] == 0) ? 0 : 1;
                int next = (i == flowerbed.size() - 1 || flowerbed[i + 1] == 0) ? 0 : 1;
                
                if(prev == 0 && next == 0){
                    flowerbed[i] = 1;
                    count++;
                }
            }
        }
        return count >= n;    
       
    }
};