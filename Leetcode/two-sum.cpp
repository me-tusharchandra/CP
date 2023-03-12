//https://leetcode.com/problems/two-sum/description/

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> v1(0,nums.size());

        int n = nums.size();
        int j = 1;
        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
                if(nums[i]+nums[j] == target){
                    v1.push_back(i);
                    v1.push_back(j);
                }
            }
        }

        return v1;
    }
};