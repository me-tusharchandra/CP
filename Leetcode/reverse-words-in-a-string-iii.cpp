// https://leetcode.com/problems/reverse-words-in-a-string-iii/description/

class Solution {
public:
    string reverseWords(string s) {
        int n = s.size();
        string word = "";
        
        vector<string> v;

        for(int i=0; i<n; i++){
            if(s[i] != ' '){
                word += s[i];
            }
            else{
                v.push_back(word);
                word = "";
            }
        }
        v.push_back(word);
        string ans = "";
        for(int i=0; i<v.size(); i++){
            for(int j=v[i].size()-1; j>=0; j--){
                ans += v[i][j];
            }
            ans += ' ';
        }
        ans.pop_back();
        return ans;
    }
};
