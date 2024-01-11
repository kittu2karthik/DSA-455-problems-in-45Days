class Solution {
public:

    void rotate(vector<vector<int>>& m) {
        int row = m.size();
        int col = m[0].size();


        for(int i=0; i<row; i++){
            for(int j=0; j<=i; j++){
                swap(m[i][j], m[j][i]);
            }
        }

        for(int i=0; i<row; i++){
            // reverse the row

            reverse(m[i].begin(), m[i].end());
        }
    }
};

// https://leetcode.com/problems/rotate-image/description/