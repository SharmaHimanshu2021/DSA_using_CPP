class MinStack {
public:
vector<int> st;
    MinStack() {
        
    }
    
    void push(int val) {
        st.push_back(val);
        
    }
    
    void pop() {
        st.pop_back();
        
    }
    
    int top() {
        return st.back();
        
    }
    
    int getMin() {
        vector<int> copy = st;
        int min = INT_MAX;
        for (int val : copy) {
            if (val < min) {
                min = val;
            }
        }
        return min;
    }
};
