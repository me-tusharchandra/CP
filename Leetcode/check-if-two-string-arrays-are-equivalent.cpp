// https://leetcode.com/problems/check-if-two-string-arrays-are-equivalent/

class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        int w1 = word1.size();
        int w2 = word2.size();
        string Word1 = "";
        string Word2 = "";
        for(string c: word1){
            Word1 += c;
        }

        for(string c: word2){
            Word2 += c;
        }

        if(Word1 == Word2){
            return true;
        }
        else
            return false;
    }
};