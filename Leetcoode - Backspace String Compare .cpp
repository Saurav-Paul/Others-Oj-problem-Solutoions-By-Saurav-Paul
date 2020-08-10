class Solution {
public:
    bool backspaceCompare(string S, string T) {
        bool ok = true ;
        int a = 0 , b = 0 ;
        int ns = S.size() , nt = T.size() ;
        auto preChar = [&](int &i,string &s, int &x){
            char c = '*' ;
            while(i >= 0){
                if(s[i] == '#') x++ , i--;
                else if(x) i--,x--;
                else {
                    c = s[i] ;
                    i -- ;
                    break ;
                }
                
            }
            return c ;
        };
        for(int i = ns - 1 , j = nt - 1; i>=0 or j>=0 ; ){
            char d = preChar(i,S,a) ;
            char e = preChar(j,T,b) ;
            if(d != e){
                ok = false ;
                break ;
            }
            
        }
        return ok ;
    }
};
