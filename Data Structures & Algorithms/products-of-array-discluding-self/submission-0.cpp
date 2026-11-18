class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int>ans(n,1);
        int product = 1;
        int j=0;
        for(int i=0; i<n-1; i++){
            product *= nums[i];
            ans[j+1] = product;
            j++;
        }
        product = 1;
        for(int i=n-1; i>0; i--){
            product *= nums[i];
            ans[j-1] *= product;
            j--;
        }
        return ans;
    }
};
