class Solution {
public:
    bool checkValidString(string s) {
        
        char c = '(' ;
        for(int i = 0 ; i < 2 ; i++){
            int balance = 0 ;
            for(auto x : s){
                if(x == c || x == '*')
                    balance ++ ;
                else if( --balance == -1){
                    return false ;
                }
            }
            
            reverse(s.begin(),s.end()) ;
            c = ')' ;
        }
            
            
        return true ;
    }
    
};
