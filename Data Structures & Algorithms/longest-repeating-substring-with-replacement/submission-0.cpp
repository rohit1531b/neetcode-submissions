class Solution {
public:
    int characterReplacement(string s, int k) {
        unordered_map<char,int>freq;
        int left = 0, maxFreq = 0, maxWindow = 0;
        for(int right = 0; right<s.length(); right++){
            freq[s[right]]++;
            maxFreq = max(maxFreq, freq[s[right]]);
            int windowLen = right-left+1;
            int char_needToChange = windowLen - maxFreq;
            if(char_needToChange > k){
                freq[s[left]]--;
                left++;
            }
            windowLen = right-left+1;
            maxWindow = max(maxWindow, windowLen);
        }
        return maxWindow;
    }
};
