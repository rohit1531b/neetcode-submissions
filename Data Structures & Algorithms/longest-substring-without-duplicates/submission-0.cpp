class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int l=0, r=0, maxlen=0;
        unordered_set<char>st;
        while(r < s.size()){
            // if char not seen, add it and expand the window
            if(st.find(s[r]) == st.end()){
                st.insert(s[r]);
                maxlen = max(maxlen, r-l+1);
                r++;
            }
            // if duplicate found, shrink the window from the left
            else{
                st.erase(s[l]);
                l++;
            }
        }
        return maxlen;
    }
};
