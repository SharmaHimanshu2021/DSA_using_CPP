class MinStack {
public:
stack<int> st;
    MinStack() {
        
    }
    
    void push(int val) {
        st.push(val);
        
    }
    
    void pop() {
        st.pop();
        
    }
    
    int top() {
        return st.top();
        
    }
    
    int getMin() {
        stack<int> copy=st;
        int min = INT_MAX;
        while (!copy.empty())
        {
            if (copy.top()<min){
                min=copy.top();              
            }
              copy.pop();
        }

        return min;
    }
};
