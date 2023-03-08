//https://leetcode.com/problems/remove-element/description/

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int n = nums.size();

        int score = 0;
        int temp = 0;

        for(int i = 0; i<n; i++){
            if(nums[i] == val){
                score++;
            }
            else{
                swap(nums[i],nums[temp]);
                temp++;
            }
        }

        return n-score;
    }
};