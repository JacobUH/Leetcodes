class Solution {
public:
    bool isPalindrome(string s) {
        string str = "";
        for (int i = 0; i < s.size(); i++){
            if (isalnum(s[i])){
                str += tolower(s[i]);
            }
        }
        
        int front = 0;
        int back = str.size() - 1;

        while (front < back){
            if(str[front] != str[back]){
                return false;
            }


            front++;
            back--;
        }

        return true;
    }
};
