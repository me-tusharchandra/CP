class Solution {
public:

    void nextPermutation(vector<int>& nums) {
        int n = nums.size();
        int l = 0;

        int temp = 1;
        for(int i=0; i<n-1; i++){
            if(nums[i] > nums[i+1]){
                temp++;
            }
        }

        if(temp == n){
            for(int i=0; i<n/2+1; i++){
                int temp = nums[i];
                nums[i] = nums[n-i-1];
                nums[n-i-1] = temp;
                return;
            }
        }

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

        sort(nums.begin(),nums.end());
        
    }
};