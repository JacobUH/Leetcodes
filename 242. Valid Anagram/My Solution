class Solution {
public:
    bool isAnagram(string s, string t) {

        if (s.size() != t.size()){
            return false;
        }

        map<char,int> sMap;
        map<char,int> tMap;

        for(int i = 0; i < s.size(); i++){
            cout << s[i] << " " << t[i] << endl;
            sMap[s[i]]++;
            tMap[t[i]]++;
        }

        for (int i = 0; i < sMap.size(); i++){
            if (sMap[i] != tMap[i]){
                return false;
            }
        }
        return true;
    }
};
