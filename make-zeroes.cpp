//User function Template for C++
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void MakeZeros(vector<vector<int> >& matrix) {
        // Code here
        int n = matrix.size();
        int m = matrix[0].size();
        vector<vector<int>> temp = matrix;
        
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(temp[i][j] == 0){
                    int sum = 0;
                    if(i > 0)
                        sum += temp[i-1][j], matrix[i-1][j] = 0;
                    if(j > 0)
                        sum += temp[i][j-1], matrix[i][j-1] = 0;
                    if(i < n-1)
                        sum += temp[i+1][j], matrix[i+1][j] = 0;
                    if(j < m-1)
                        sum += temp[i][j+1], matrix[i][j+1] = 0;
                    matrix[i][j] = sum;
                }
            }
        }
        
        return;
        
    }
};