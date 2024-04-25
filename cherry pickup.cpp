class Solution {
public:
int solve(int i, int j1, int j2, int n, int m, vector<vector<int>> &a, vector<vector<vector<int>>> &dp){
    if(j1<0 || j1>=m || j2<0 || j2>=m) return -1e8;// to make it minimum and avoid
    if(i==n-1){
        if(j1==j2) return a[i][j1];
        else return a[i][j1]+a[i][j2];
    }
    if(dp[i][j1][j2]!=-1)return dp[i][j1][j2];
    int maxi = INT_MIN;
    for( int dj1 = -1;dj1<=1;dj1++){
        for (int dj2 = -1; dj2 <= 1; dj2++) {
          int ans=0;

          if (j1 == j2)
            ans = a[i][j1] + solve(i + 1, j1 + dj1, j2 + dj2, n, m, a, dp);
          else
            ans = a[i][j1] + a[i][j2] +
                  solve(i + 1, j1 + dj1, j2 + dj2, n, m, a, dp);

          // Update the maximum result
          maxi = max(maxi, ans);
        }
    }
    return dp[i][j1][j2]=maxi;
}

    int cherryPickup(vector<vector<int>>& grid) {
        int r = grid.size();
        int c = grid[0].size();
         vector<vector<vector<int>>> dp(r, vector<vector<int>>(c, vector<int>(c, -1)));
        return solve(0,0,c-1,r,c,grid,dp);
    }
};