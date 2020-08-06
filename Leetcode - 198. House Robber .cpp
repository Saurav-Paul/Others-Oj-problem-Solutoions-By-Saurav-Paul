class Solution {
public:
    int rob(vector<int>& nums) {
        int n = nums.size() ;
        if(n == 0) return 0 ;
        
        vector<vector<int>> dp(n+1,vector<int>(2,0)) ;
        dp[1][1] = nums[0] ;
        
        
        for(int i = 1 ; i < n ; i++){
            dp[i+1][0] = max(dp[i][1],dp[i][0]);
            dp[i+1][1] = max(dp[i-1][1] + nums[i], dp[i+1][0]) ;
            
        }
        
        return max(dp[n][0],dp[n][1]) ;
        
    }
};
