class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int zero = 0;
        int nonZero = 0;

        int n = nums.size();

        while(zero < n && nonZero < n){
            if(nums[zero] == 0 && nums[nonZero] != 0){
                swap(nums[zero], nums[nonZero]);
            }
            else if(nums[zero] != 0){
                zero++;
            }
            else if(nums[nonZero] == 0){
                nonZero++;
            }
        }
    }
};

// https://leetcode.com/problems/move-zeroes/