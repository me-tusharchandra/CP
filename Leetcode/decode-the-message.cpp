// https://leetcode.com/problems/decode-the-message/description/

class Solution {
public:
    string decodeMessage(string key, string message) {
        map<char, char> mp;

        string ans = "";
        int temp = 'a';

        for(auto i:key){
            if((i != ' ') && (mp.find(i) == mp.end())){
                mp[i] = temp++;
            }
        }

        for(auto i: message){
            if(i == ' '){
                ans += ' ';
            }
            else
                ans += mp[i]; 
        }

        return ans;
    }
};