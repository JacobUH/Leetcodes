class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int l = 0;
        int r = 0;
        int maxi = 0;
        unordered_set<char> set;
        if (s.empty()) return 0;

        while (r < s.size()){
            //if current letter is not in set
            if (set.find(s[r]) == set.end()){
                set.insert(s[r]);
                maxi = max(maxi, r - l);
                r++;
            }
            else{
                set.erase(s[l]);
                l++;
            }
            
        }
        return maxi + 1;
    }
};
