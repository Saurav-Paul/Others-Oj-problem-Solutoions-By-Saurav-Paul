class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        long long ans = -1e18+90 , prev = 0;
        for(auto x : nums){
            prev += x ;
            ans = max(ans,prev) ;
            prev = max(0LL , prev) ;
        }

        return ans ;
    }
};
