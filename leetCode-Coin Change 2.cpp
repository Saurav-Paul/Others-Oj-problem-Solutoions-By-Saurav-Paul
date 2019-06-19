class Solution {
public:
    unsigned long long change(int amount, vector<int>& coins) {
        vector < unsigned long long > dp(amount+1);
        dp[0] = 1;
        for(int x : coins){
            for(int i = 1 ; i <= amount ; i++)
                if(i-x >=0)
                    dp[i] += dp[i-x];
        }
        return dp[amount];
    }
};
