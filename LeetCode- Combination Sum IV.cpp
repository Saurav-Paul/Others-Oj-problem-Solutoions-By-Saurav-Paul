class Solution {
public:
    unsigned long long combinationSum4(vector<int>& nums, int target) {
        const int mod = 1e9+7;
        vector <unsigned long long> dp(target+1);
        dp[0] = 1;
        for(int i = 0 ; i < target; i++){
            for(int x : nums){
                if(i+x <= target){
                  dp[i+x] += dp[i];
                }
            }
        }
        return dp[target] ;
    }
};
