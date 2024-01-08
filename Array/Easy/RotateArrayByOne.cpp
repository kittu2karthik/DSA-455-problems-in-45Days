class Solution {
public:
    void rotate(vector<int>& nums, int k) {
         int temp = nums[0];
    for(int i=1;i<nums.size(); i++ ){
        nums[i-1] = nums[i];
    }
   nums[nums.size()-1] = temp;

    }
};

// https://www.codingninjas.com/studio/problems/left-rotate-an-array-by-one_5026278?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf