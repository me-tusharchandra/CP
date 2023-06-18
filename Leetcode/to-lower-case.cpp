// https://leetcode.com/problems/to-lower-case/description/

class Solution {
public:
    string toLowerCase(string s) {
        string ans = "";
        for(auto c: s){
            ans += tolower(c);
        }

        return ans;
    }
};
