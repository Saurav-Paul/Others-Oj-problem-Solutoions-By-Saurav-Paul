class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int zeros = 0 ;
        int products = 1 ;
        for(auto x : nums){
            if(x == 0) zeros ++ ;
            else products *= x;
        }
        for(auto &x : nums){
            if(x == 0){
                x = (zeros > 1 ? 0 : products) ;
            }
            else{
                x = (zeros > 0 ? 0 : products / x) ;
            }
        }
        return nums ;
    }
};
