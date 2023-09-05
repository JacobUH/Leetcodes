class Solution {
public:
    // [1,1,1,2,2,3]
    int removeDuplicates(vector<int>& nums) {
        int index = 1;
        if (nums.size() == 1)
            return index;
        for (int i = 2; i < nums.size(); i++){
            if (nums[i] != nums[index-1]){
                nums[++index] = nums[i];
            }
        }
        return index + 1;
    }
};

// index: 2
// i: 2, 1,1,1,2,2,3
// i: 3, 1,1,2,2,2,3
// i: 4,
