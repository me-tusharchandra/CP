// https://leetcode.com/problems/split-a-string-in-balanced-strings/

class Solution {
public:
    int balancedStringSplit(string s) {
        int n = s.size();
        int l=0;
        int r=0;
        int res = 0;
        for(int i=0; i<n; i++){
            if(s[i] == 'L')
                l++;
            else if(s[i] == 'R')
                r++;
            if(l==r)
                res++;
        }

        return res;
    }
};