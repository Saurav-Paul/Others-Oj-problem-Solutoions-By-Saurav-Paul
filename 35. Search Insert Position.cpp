//https://leetcode.com/problems/search-insert-position/
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int pos = 0 ;
        
        for(auto x : nums){
            if(x >= target){
                break;
            }
            pos ++;
        }
        
        return pos ;
    }
};
