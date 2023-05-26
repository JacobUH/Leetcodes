class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        vector<int> results;
        map <int,int, greater<int>> occurences;
        vector <pair<int,int>> output;

        for (int i = 0; i < nums.size(); i++){
            occurences[nums[i]]++;
        }
        
        for (auto i = occurences.begin(); i != occurences.end(); i++){
            output.push_back({i->second, i->first});
        }

        sort(output.rbegin(), output.rend());

        for (int i = 0; i < k; i++){
            results.push_back(output[i].second);
        }

        return results;
    }
};
