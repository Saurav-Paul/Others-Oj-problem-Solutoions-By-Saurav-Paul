class Solution {
public:
   long long int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int m = obstacleGrid.size();
        int n = obstacleGrid[0].size();
       
        vector < vector <long long int > > dp(m, vector <long long int > (n));
        if(obstacleGrid[0][0]==0)
            dp[0][0] = 1;
        for (int i=0; i < m ; i++)
            for(int j =0; j < n ; j++){
                if(obstacleGrid[i][j]==0){
                    if(i &&  obstacleGrid[i-1][j]==0){
                        dp[i][j] += dp[i-1][j] ;
                    }
                    if(j && obstacleGrid[i][j-1]==0){
                        dp[i][j] += dp[i][j-1];
                    }
                }
                
            }
        return dp[m-1][n-1] ;
    }
};
