class Solution {
public:
    void reverseString(vector<char>& s) {
        
       stack<char>st;
        int i=0;
        while (i<s.size()){
            st.push(s[i]);
            i++;
        }
        i=0;
        while (!st.empty()){
            s[i]=(st.top());
            st.pop();i++;
        }
       
        
    }
};