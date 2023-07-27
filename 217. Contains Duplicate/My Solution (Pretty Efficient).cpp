class Solution {
public:
    // sort the vector, do one iteration and check next num to see if same (do this version later)
    bool containsDuplicate(vector<int>& nums)
    {
        sort(nums.begin(), nums.end());
        for (int i = 0; i < nums.size()- 1; i++){
            if (nums[i] == nums[i+1])
                return true;
        }
        return false;
    }
};
