class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<string, vector<string> > rem ;
        for(auto x : strs){
            string y = x ;
            sort(y.begin(),y.end()) ;
            rem[y].emplace_back(x) ;
        }
        vector<vector<string> > ans ;
        for(auto x : rem){
            ans.emplace_back(x.second) ;
        }
        return ans ;
    }
};
