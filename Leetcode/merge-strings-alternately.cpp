// https://leetcode.com/problems/merge-strings-alternately/description/

class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int w1 = word1.size();
        int w2 = word2.size();
        int n = max(w1,w2);

        string ans = "";

        for(int i=0; i<n; i++){
            if(i<w1)
                ans.push_back(word1[i]);
            if(i<w2)
                ans.push_back(word2[i]);
        }
        return ans;
    }
};
