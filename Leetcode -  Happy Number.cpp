class Solution {
    int dig_sum(int n){
        int sum = 0 ;
        
        while(n){
            int mod = n % 10 ;
            sum += (mod * mod) ;
            n /= 10 ;
        }
        
        return sum ;
    }
public:
    bool isHappy(int n) {
        bool ok = true ;
        
        unordered_map<int,int> rem ;
        while(n != 1){
            n = dig_sum(n) ;
            if(rem[n] > 0){
                ok = false ;
                break ;
            }
            rem[n] = 1;
        }
        
        return ok ;
    }
};
