//https://leetcode.com/problems/reordered-power-of-2/
class Solution {
public:
    bool reorderedPowerOf2(int n) {
        string num = to_string(n) ;
        sort(num.begin(), num.end()) ;
        
        for(int i = 0 ; i <= 30 ; i++){
            int x = pow(2,i) ;
            string temp = to_string(x) ;
            sort(temp.begin() , temp.end()) ;
            
            if(temp == num) return true ;
        }
        
        return false;
    }
    
};
