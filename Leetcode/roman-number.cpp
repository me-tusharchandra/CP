// https://leetcode.com/problems/roman-to-integer/description/


class Solution {
public:
    int romanToInt(string s) {

        int sum = 0;
        int temp;

        map<char,int> num{
            {'I',1},
            {'V',5},
            {'X',10},
            {'L',50},
            {'C',100},
            {'D',500},
            {'M',1000}
        };

        for(int i = 0; i< s.length(); i++){
            if(num[s[i]]<num[s[i+1]]){
                sum -= num[s[i]];
            }
            else{
                sum += num[s[i]];
            }
        }
        return sum;
    }
};