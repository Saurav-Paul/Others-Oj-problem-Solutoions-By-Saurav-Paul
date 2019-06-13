class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int nax = prices.size() ;
        int ans = 0;
        
        for(int i = 0 ; i < nax ; i++){
           for(int j = i+1; j< nax ; j++){
               if(prices[i] >= prices[j])
                    break ;
               ans = max(ans, prices[j]-prices[i]);
           }
            
        }
        return ans ;
        
    }
};
