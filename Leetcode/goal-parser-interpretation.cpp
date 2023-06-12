// https://leetcode.com/problems/goal-parser-interpretation/description/

class Solution {
public:
    string interpret(string command) {
        string ans;
        int n = command.size();

        for(int i=0; i<n; i++){
            if(command[i] == 'G'){
                ans.append("G");
            }
            else if(command[i] == '('){
                if(command[i+1] == ')'){
                    ans.append("o");
                }
                else if(command[i+1] == 'a'){
                    ans.append("al");
                }
            }
        }
        return ans;
    }
};