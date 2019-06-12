class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int ans = nums[0], temp =0;
        for(int x : nums){
            temp += x;
            ans = max(temp,ans) ;
            if(temp < 0)
                    temp = 0;
        }
         return ans ;
    }
   
};
