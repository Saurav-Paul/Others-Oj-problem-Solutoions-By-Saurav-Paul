class Solution {
public:
    int longestValidParentheses(string &s) {
        
        /* ) ( ( ) ) ) ) ( ( ) ) ( ) ) 
        = >0 0 0 2 4 0 0 0 0 2 4 0 6 0
        */
        
        /* ) ( ) ( ) )
        => 0 0 2 0 4 
        */
        int sz= (int) s.size();
        vector <int > dp(sz);
        int maxi = 0;
        for(int i = 1; i < sz ; i++){
            if(s[i]==')'){
                if(s[i-1]=='(')
                    dp[i] = (i-2 >=0 ? dp[i-2] : 0) + 2;
                
                else if(i-dp[i-1]> 0 and s[i-dp[i-1]-1]=='(')
                    dp[i] = dp[i-1] + (i-dp[i-1] >=2 ? dp[i-dp[i-1]-2] : 0) + 2;
                
                maxi= max(maxi,dp[i]);
            }
        }
        
        return maxi ;
        
    }
};
