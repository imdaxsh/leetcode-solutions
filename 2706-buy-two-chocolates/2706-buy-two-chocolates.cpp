class Solution {
public:
//     int buyChoco(vector<int>& p, int m) {
//         int n = p.size();
//         int ans=0;
//         for(int i=0;i<n;i++){
//             for(int j=1;j<n-1;j++){

//             if(p[i]+p[j] <= m) return (m -(p[i]+p[j]));
//                 else return m;
//             }
//         }
      
//         return 0;
//     }
    
      int buyChoco(vector<int>& prices, int money) {
        // Sorting the prices in ascending order
        sort(prices.begin(), prices.end());

        // Calculating the sum of the two lowest prices
        int chk = prices[0] + prices[1];

        // Checking if there's enough money to buy the chocolates
        if (money >= chk)
            return money - chk; // Returning the remaining money after buying the chocolates
        
        return money; // Returning the original amount of money if it's not enough to buy the chocolates
    }
};