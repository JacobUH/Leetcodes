class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        if (n == 0)
            return 0;

        sort(nums.begin(), nums.end());
        int counter = 1;
        int highest_num = 1;

        for (int i = 0; i < nums.size()-1; i++){
            if (nums[i] == nums[i+1]){
                continue;
            }
            else if (nums[i] + 1 == nums[i+1]){
                counter++;
                if (counter > highest_num)
                    highest_num = counter; 
            }
            else{
                counter = 1;
            }
        }
        return highest_num;
    }
};
