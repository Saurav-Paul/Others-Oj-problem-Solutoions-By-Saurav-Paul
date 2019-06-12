class Solution {
public:
    int climbStairs(int n) {
        vector <int > dp(n+1);
        dp[0] = 1;
        for(int i = 0 ; i < n ; i++){
            for(int x : {1,2})
            {
                if(x+i <= n){
                    dp[i+x] += dp[i] ;
                }
            }
        }
       return dp[n];
    }
};
