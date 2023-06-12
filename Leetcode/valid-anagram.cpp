// https://leetcode.com/problems/valid-anagram/

class Solution {
public:
    bool isAnagram(string s, string t) {
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());

        for(int i=0; i<s.size(); i++){
            if(s[i] == t[i] && s.size() == t.size()){
                continue;
            }
            else
                return false;
        }
        return true;
    }
};