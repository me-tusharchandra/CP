//https://leetcode.com/problems/running-sum-of-1d-array/description/?envType=study-plan&id=level-1

class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int n = nums.size();
        int sum = 0;

        for(int i=0; i<n; i++){
            sum += nums[i];
            nums[i] = sum;
        }

        return nums;
    }
};