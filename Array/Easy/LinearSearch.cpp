int linearSearch(int n, int num, vector<int> &arr)
{   int ans=-1;
    for(int i=0; i<n; i++){
        if(num == arr[i]){
            ans = i;
            break;
        }
    }

        return ans;
    
}