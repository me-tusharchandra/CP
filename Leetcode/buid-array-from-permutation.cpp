//https://leetcode.com/problems/build-array-from-permutation/description/

class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> v1;
        for(int i=0; i<n; i++){
            v1.push_back(nums[nums[i]]);
        }
        return v1;
    }
};