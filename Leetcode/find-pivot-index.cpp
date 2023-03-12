// https://leetcode.com/problems/find-pivot-index/description/?envType=study-plan&id=level-1

class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n = nums.size();
        int total = 0;
        int leftsum=0;
        int rightsum = 0;
        for(int i=0; i<n; i++){
            total += nums[i];
        }

        for(int i=0; i<n; i++){
            rightsum = total - nums[i] - leftsum;
            if(leftsum == rightsum){
                return i;
            }
            leftsum += nums[i];
        }

        return -1;
    }
};