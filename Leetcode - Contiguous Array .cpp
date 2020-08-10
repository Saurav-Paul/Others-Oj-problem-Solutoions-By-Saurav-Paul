class Solution {
public:
    int findMaxLength(vector<int>& nums) {

        int x = 0 , ans = 0 ;
        unordered_map<int,int> rem ;
        rem[0] = 0 ;
        
        for(int i = 0 ; i < nums.size() ; i++){
            x += (nums[i]?1:-1) ;
            if(rem.find(x) != rem.end()){
                ans = max(ans, i - rem[x] + 1) ; 
            }
            else{
                rem[x] = i + 1;
            }
        }
        
        return ans ;
    }
};
