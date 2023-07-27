class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
        set <vector<int>> triplets;
        vector <vector<int>> results;
        int target = 0;

        // sort the nums vector
        sort(nums.begin(), nums.end());

        for (int i = 0; i < nums.size(); i++){
            if (nums[0] > 0) {
                break;
            }

            int j = i + 1;
            int k = nums.size() - 1;

            while(j < k){
                int sum = nums[i] + nums[j] + nums[k];
                if (sum == target){
                    
                    triplets.insert({nums[i], nums[j], nums[k]});
                    j++;
                    k--;
                }
                else if (sum < target){
                    j++;
                }
                else{
                    k--;
                }
            }
        }
        for(auto i : triplets){
            results.push_back(i);
        }
            
        return results;
    }
};
