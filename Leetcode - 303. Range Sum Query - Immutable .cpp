class NumArray {
public:
    vector<int> cum ;
    NumArray(vector<int>& nums) {
        int n = nums.size() ;
        cum = vector<int> (n+1);
        for(int i = 0 ; i < n; i++){
            cum[i+1] = cum[i] + nums[i] ;
        }
    }
    
    int sumRange(int i, int j) {
        return ((int)cum[j+1]-cum[i]) ;
        
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(i,j);
 */
