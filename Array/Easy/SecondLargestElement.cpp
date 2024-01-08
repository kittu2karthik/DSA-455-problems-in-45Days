vector<int> getSecondOrderElements(int n, vector<int> a) {
    // Write your code here.
    int l = INT_MIN;
    int sl = INT_MIN;

    int s = INT_MAX;
    int ss = INT_MAX;

    vector<int> ans;

    

    for(int i=0; i<n; i++){
        if(a[i] > l){
            sl = l;
            l = a[i];
        }

        if(a[i] < s){
            ss = s;
            s = a[i];
        }

        else if(a[i] > sl && a[i] < l){
            sl = a[i];
        }

        else if(a[i] < ss && a[i] > s){
            ss = a[i];
        }
    }

    ans.push_back(sl);
    ans.push_back(ss);

    return ans;


// https://www.codingninjas.com/studio/problems/ninja-and-the-second-order-elements_6581960?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf