class MinStack {
public:
    stack<int> st;
    stack<int> mi;
    MinStack() {

    }
    
    void push(int val) {
        st.push(val);
        if(mi.empty()) mi.push(val);
        else{
            mi.push(min(mi.top(),val));
        }
    }
    
    void pop() {
        st.pop();
        mi.pop();
    }
    
    int top() {
        return st.top();
    }
    
    int getMin() {
        return mi.top();
    }
};
