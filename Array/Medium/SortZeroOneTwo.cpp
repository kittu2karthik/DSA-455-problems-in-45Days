class Solution {
public:
    void sortColors(vector<int>& arr) {
        int n = arr.size();
        int low = 0, mid = 0;
        int high = n-1;
        while(mid <= high){
            if(arr[mid] == 0){
                swap(arr[low], arr[mid]);
                    mid++; low++;
                
            }
            else if(arr[mid] == 2){
                swap(arr[mid], arr[high]);
                high--;
            }
            else{
                mid++;
            }
        }
    }
};


// https://leetcode.com/problems/sort-colors/