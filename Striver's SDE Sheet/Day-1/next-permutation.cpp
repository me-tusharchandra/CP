// https://leetcode.com/problems/next-permutation/description/

class Solution {
public:

    void nextPermutation(vector<int>& nums) {
        int n = nums.size();
        int l = 0;

        for(int i=n-1; i>0; i--){
            if(nums[i] > nums[i-1]){
                int small = nums[i];

                for(int j = i; j<n; j++){
                    if(nums[j] <= small && nums[j] > nums[i-1]){
                        small = nums[j];
                        l = j;
                    }
                }
                swap(nums[i-1], nums[l]);
                sort(nums.begin()+i, nums.end());
                return;
            }
        }

        reverse(nums.begin(),nums.end());
        
    }
};