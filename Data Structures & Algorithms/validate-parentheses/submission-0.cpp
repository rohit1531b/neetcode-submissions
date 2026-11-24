class Solution {
public:
    bool isValid(string s) {
        stack<char>st;
        for(int i=0; i<s.size(); i++){
            // open char h to stack me push kr do
            if(s[i] == '(' || s[i] == '{' || s[i] == '['){
                st.push(s[i]);
            }
            // clos char h
            else{
                if(st.size() == 0) return false;  // edge case for clos bra > open bra
                // main condition
                if( st.top() == '(' && s[i] == ')' ||
                    st.top() == '{' && s[i] == '}' ||
                    st.top() == '[' && s[i] == ']'
                ) st.pop();
                else return false;  // no match found;
            }
        }
        return st.size() == 0;  // opening bra > closing
    }
};
