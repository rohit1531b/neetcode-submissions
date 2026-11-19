class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> seen(nums.begin(), nums.end());
        int longest = 0;
        for (int num : seen) {
            // Only start counting if it's the beginning of a sequence
            if (!seen.count(num - 1)) {
                int currentNum = num;
                int length = 1;
                while (seen.count(currentNum + 1)) {
                    currentNum++;
                    length++;
                }
                longest = max(longest, length);
            }
        }
        return longest;
    }
};
