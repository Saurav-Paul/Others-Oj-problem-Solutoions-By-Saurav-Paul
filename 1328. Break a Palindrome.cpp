//https://leetcode.com/problems/break-a-palindrome/
class Solution {
public:
    string breakPalindrome(string &palindrome) {
        int n = palindrome.size() ;
        
        if(n <= 1) return "" ;
        
        bool changed = false;
        for(int i = 0 ; i < n ; i++){
            if(n % 2 == 1 && n / 2 == i) continue ;
            if(palindrome[i] != 'a'){
                palindrome[i] = 'a' ;
                changed = true;
                break;
            }
        }
        
        if(!changed){
            palindrome[n - 1] = 'b' ;
        }
        
        return palindrome;
        
    }
};
