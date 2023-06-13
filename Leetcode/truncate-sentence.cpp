// https://leetcode.com/problems/truncate-sentence/description/

class Solution {
public:
    string truncateSentence(string s, int k) {
        int n = s.size();

        string ans = "";
        vector<string> v;
        string temp = "";

        for(int i=0; i<n+1; i++){
            if(s[i] == ' ' || i == n){
                v.push_back(temp);
                temp = "";
            }
            temp += s[i];
        }

        for(int i=0; i<k; i++){
            ans += v[i];
        }

        return ans;
    }
};