class MyQueue {
public:
    stack<int> s1, s2;  // s1 => actual queue like ||  s2 => help s1 to behave as queue
    MyQueue() {}

    void push(int x) {        
        while(!s1.empty()){   // put all values of s1 in s2 for time being
            s2.push(s1.top());
            s1.pop();
        }
        s1.push(x);       // push element to the bottom of s1
        while(!s2.empty()){  // get back all value form s2
            s1.push(s2.top());
            s2.pop();
        }
    }
    
    int pop() {
        int p = s1.top();
        s1.pop();
        return p;
    }
    
    int peek() {
        return s1.top();
    }
    
    bool empty() {
        return s1.empty();
    }
};