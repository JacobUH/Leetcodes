class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        // make maps for anagrams 
        map <string, vector<string>> eachSum;
        vector <vector<string>> results;

        for (int i = 0; i < strs.size(); i++){
            string curStr = strs[i];
            sort(curStr.begin(), curStr.end());
            eachSum[curStr].push_back(strs[i]);
        }
        
        for (auto i = eachSum.begin(); i != eachSum.end(); ++i){
            results.push_back(i->second);
        }

        return results;
    }  
};
