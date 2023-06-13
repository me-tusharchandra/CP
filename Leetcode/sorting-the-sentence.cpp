//https://leetcode.com/problems/sorting-the-sentence/description/

class Solution {
public:
    string sortSentence(string s) {
        vector<string> ans(10);
        string word = "";
        string f = "";

        for(int i=0; i<s.size(); i++){
            if(s[i] >= 48 && s[i] <= 57){
                ans[s[i]-48] = word + " ";
                word = "";
            }    
            else if(s[i] != ' ')
                word += s[i];
        }

        for(string m: ans){
            f += m;
        }
        f.pop_back();
        return f;
    }
};