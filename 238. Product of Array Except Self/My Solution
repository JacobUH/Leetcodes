class Solution {
public:
    // try to visualize the loops
    // nums = [1,2,3,4]
    // output = [24,12,8,6]

    vector<int> productExceptSelf(vector<int>& nums) {
        vector <int> results(nums.size(), 1); // results = [1,1,1,1]
        
        int left_product = 1;
        for (int i = 1; i < nums.size(); i++){
            left_product *= nums[i-1];
            results[i] *= left_product;
        }
        // we have = [1,1,2,6]

        int right_product = 1;
        for (int i = nums.size() - 2; i >= 0; i--){
            right_product *= nums[i+1];
            results[i] *= right_product;
        }
        // we have = [24,12,8,6]
        return results;
    }
};
