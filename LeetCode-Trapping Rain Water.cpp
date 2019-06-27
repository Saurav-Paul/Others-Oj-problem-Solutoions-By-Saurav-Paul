class Solution {
public:
    int trap(vector<int>& height) {
       int ans = 0 ;
        /*
        2 0 2
        2 2 2
        2 2 2
        */
        int sz = height.size() ;
        vector <int> leftmax(sz+1),rightmax(sz+1);
        if(sz)
            leftmax[0] = height[0],rightmax[sz- 1]= height[sz-1];
        for(int i = 0 ; i< sz; i++){
            if(i)
                leftmax[i] = max(height[i],leftmax[i-1]);
            if(i < sz)
                rightmax[sz-i-1] = max(height[sz-i-1],rightmax[sz-i]);
        }

        
        for(int i = 0 ; i < sz ; i++){
            int temp =min(leftmax[i],rightmax[i]) - height[i];
            ans += temp;
        }
        
        return ans;
    }
};
