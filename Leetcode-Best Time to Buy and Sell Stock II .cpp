class Solution {
public:
    int maxProfit(vector<int>& prices) {
            
        int n = prices.size() ;
        vector<int> dp(2) ;
        dp[0] = prices[0] ;
        for(int i = 1 ; i < n ; i ++){
            if(dp[1] < dp[1] + prices[i] - dp[0]){
                dp[1] = dp[1] + prices[i] - dp[0] ;
                dp[0] = prices[i] ;
            }
            else{
                dp[0] = min(prices[i],dp[0]);
            }
        }
        return dp[1] ;
    }
};
