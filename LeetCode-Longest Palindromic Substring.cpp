class Solution {
public:
    string longestPalindrome(string s) {
        int sz = (int)s.size() ;
        string answer = "";
        int maxi = 0;
        for(int i =0 ; i< sz ; i++){
            int len = find_answer(s,i,i,sz);
            int len2 = find_answer(s,i,i+1,sz);
            
            if(len > maxi || len2 > maxi){
                int st , sp;
                if(len >= len2){
                    maxi = len;
                    st = i-len/2;
                    sp = i + len/2;
                }
                else{
                    maxi = len2;
                    st = i - len2/2 + 1;
                    sp = i + len2/2 ;
                }
                answer = "";
                for( ;st <= sp ; st++)
                        answer +=s[st];
            }
             
            
        }
        return answer ;
    }

   int find_answer(string &s, int lt ,int rt,int sz){
        if(s[lt]!=s[rt])
			return 0;
        while(lt-1 >=0 && rt+1 <sz && s[lt-1]==s[rt+1]){
            lt--;
            rt++;
        }
        return rt-lt+1;
        
    }
};
