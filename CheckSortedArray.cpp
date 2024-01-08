int isSorted(int n, vector<int> a) {
    // Write your code here.
    int ans = 1;

    for(int i=1; i<=n-1; i++){
        if(a[i-1] > a[i]){
            ans = 0;
        }
    }

    return ans;
}

// Sorted and Rotated

class Solution {
public:
    bool check(vector<int>& nums) {
        int cnt = 0;

        for(int i=1; i<nums.size(); i++){
            if(nums[i-1] > nums[i]){
                cnt++;
            }
        }

        if(nums[0] < nums[nums.size() - 1]) {
            cnt++;
        }

        if(cnt > 1){
            return false;
        }
        else{
            return true;
        }


    }
};


// https://www.codingninjas.com/studio/problems/ninja-and-the-sorted-check_6581957?utm_source=striver&utm_medium=website&utm_campaign=codestudio_a_zcourse
// https://leetcode.com/problems/check-if-array-is-sorted-and-rotated/description/