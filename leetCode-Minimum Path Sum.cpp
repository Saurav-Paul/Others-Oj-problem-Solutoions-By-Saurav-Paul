class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        const int INF = 1e9 + 90;
        int n= grid.size();
        int m =grid[0].size();
        vector < vector < int > > dp(n,vector<int > (m,INF));
        dp[0][0] = grid[0][0] ;
        
        for(int i = 0 ; i < n; i++){
            for(int j= 0 ; j < m ; j++){
                if(i)
                    dp[i][j] = min(dp[i][j],grid[i][j]+dp[i-1][j]);
                if(j)
                    dp[i][j] = min(dp[i][j],grid[i][j]+dp[i][j-1]);
            }
        }
        
        
        return dp[n-1][m-1];
    }
};
