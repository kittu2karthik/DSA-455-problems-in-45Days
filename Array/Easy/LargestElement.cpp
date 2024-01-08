
int largestElement(vector<int> &arr, int n) {
    // Write your code here.
    int ans = arr[0];

    for(int i=1; i<n; i++){
        if(ans < arr[i]){
            ans = arr[i];
        }
    }

    return ans;
}

// https://www.codingninjas.com/studio/problems/largest-element-in-the-array-largest-element-in-the-array_5026279?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf