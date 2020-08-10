class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> PQ ;
        PQ.push(0) ;
        int sz = stones.size() ;
        for(auto x : stones){
            PQ.push(x) ;
        }
        auto getElement = [&](){
            int top = PQ.top() ;
            PQ.pop() ;
            return top ;
        };
        while(sz > 1){
            int x = getElement() ;
            int y = getElement() ;
            sz -= 2 ;
            if( x != y){
                PQ.push(max(x,y)-min(x,y)) ;
                sz += 1;
            }
        }
        return PQ.top() ;
    }
};
