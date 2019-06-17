class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        int cnt=0, sz = (int)arr.size();
        vector <int > temp;
        for(int i=0 ; i < sz ; i++){
            if(cnt==sz)
                break ;
            if(arr[i]==0){
                temp.emplace_back(0);
                cnt++;
                if(cnt==sz)
                    break ;
                temp.emplace_back(0);
                cnt++;
                if(cnt==sz)
                    break ;
            }
            else{
                temp.emplace_back(arr[i]);
                cnt++;
                
            }
        }
        arr = temp;
    }
};
