class Solution {
public:
    int largestValsFromLabels(vector<int>& values, vector<int>& labels, int num_wanted, int use_limit) {
        vector < pair<int , int > > v;
        int sz=(int) values.size();
        for(int i = 0 ; i < sz ; i ++){
            v.emplace_back(values[i],labels[i]);
        }
        sort(v.begin(),v.end(),greater<pair<int,int> >());
        int ans = 0;
        map <int,int > mymap;
       
        for(int i = 0 ; i < sz && num_wanted ; i ++){
           
         
             if(mymap[v[i].second] < use_limit){
             ;
             ans += v[i].first;
             mymap[v[i].second]++;
             num_wanted--;
             
             
         }   
        }
        return ans;
        
    }
};
