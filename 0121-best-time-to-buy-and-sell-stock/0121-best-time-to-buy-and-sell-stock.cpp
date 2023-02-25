class Solution {
public:
    int maxProfit(vector<int>& prices) {
//        int min_lement (prices.begin(), prices.end());
        
//         if(max_element = prices.end()){
//             return 0;
//         }else
// int max_element (min_element.begin(),price.end());
//         return max_element -min_element;
            int profit=0;
        int minelem=prices[0];
        for(int i=1;i<prices.size();i++){
           minelem=min(prices[i],minelem);
            profit=max(profit,(prices[i]-minelem));
        }
        return profit;
    }
};