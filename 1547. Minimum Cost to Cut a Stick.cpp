//https://leetcode.com/problems/length-of-last-word/
class Solution {
public:
    int lengthOfLastWord(string s) {
        int cnt = 0 ;
        bool start = false;
        
        for(int i = s.size() - 1; i >= 0 ; i--){
            if(s[i] != ' '){
                start = true;
                ++ cnt ;
            }
            else{
                if(start) break;
            }
        }
        
        return cnt ;
    }
};
