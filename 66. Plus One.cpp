//https://leetcode.com/problems/plus-one/
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        // reverse(digits.begin(), digits.end()) ;
        
        int carry = 1 ;
        
        for(int i = digits.size() - 1 ; i >= 0 ; i--){
            int num = digits[i] + carry ;

            carry = num / 10 ;
            num = num % 10;
        
            digits[i] = num ;
        }
        
        if(carry) digits.insert(digits.begin(),carry) ;
        
        return digits;
    }
};
