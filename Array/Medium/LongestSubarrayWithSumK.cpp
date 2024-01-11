int longestSubarrayWithSumK(vector<int> a, long long Z) {
    int n = a.size();
    int len = 0;
    int left = 0, right = 0;
    long long sum = a[0];

    while(right < n ){
        while( left<= right &&  sum > Z){
            sum -= a[left];
            left++;
        }
        if(sum == Z){
            len = max(len, right - left + 1);
        }
        right++;
        if(right<n)
        sum += a[right];
    }

 return len;
}

// https://www.codingninjas.com/studio/problems/longest-subarray-with-sum-k_6682399?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf