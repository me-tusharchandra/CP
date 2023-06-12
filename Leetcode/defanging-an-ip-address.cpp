//https://leetcode.com/problems/defanging-an-ip-address/

class Solution {
public:
    string defangIPaddr(string address) {
        int n = address.size();

        string ans = "";
        for(char c: address){
            if(c == '.'){
                ans += "[.]";
            }
            else
                ans += c;
        }

        return ans;
    }
};

// the above code is faster than logical condition

class Solution {
public:
    string defangIPaddr(string address) {
        int n = address.size();

        string ans = "";
        for(char c: address){
            (c == '.')? ans += "[.]" : ans += c;
        }
        return ans;
    }
};

// above solution is slower