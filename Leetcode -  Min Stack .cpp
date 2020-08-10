class MinStack {
public:
    /** initialize your data structure here. */
    stack <pair<int,int>> stk;
    
    MinStack() {
        stk.empty() ;

    }
    
    void push(int x) {
        if(stk.empty()){
            stk.push({x,x}) ;
        }
        else{
            auto p = stk.top() ;
            stk.push({x,min(x,p.second)}) ;
        }

    }
    
    void pop() {
        if(!stk.empty())
            stk.pop() ;
    }
    
    int top() {
        return stk.top().first ;
    }
    
    int getMin() {
        return stk.top().second ;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(x);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */
