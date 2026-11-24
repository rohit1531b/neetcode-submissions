class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int st = 0, end = nums.size()-1;
        while(st < end){
            int sum = nums[st] + nums[end];
            if(sum == target){
                return {st+1, end+1}; // bcoz its a 1-based indexing
            }
            else if(sum < target){
                st++; // becoz array is sorted
            }
            else{
                end--;
            }
        }
    }
};
