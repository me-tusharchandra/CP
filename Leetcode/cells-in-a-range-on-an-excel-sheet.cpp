//https://leetcode.com/problems/cells-in-a-range-on-an-excel-sheet/

class Solution {
public:
    vector<string> cellsInRange(string s) {
        int r1 = s[1];
        int r2 = s[4];
        char c1 = s[0];
        char c2 = s[3];
        vector<string> v1;

        for(int i=int(c1); i<=int(c2); i++){
            for(int j=r1; j<=r2; j++){
                string res;
                res += i;
                res += j;
                v1.push_back(res);
            }
        }

        return v1;
    }
};