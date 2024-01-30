//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
        vector<vector<vector<int>>> dp;
        
        int lcs(string a, string b, string c, int i, int j, int k){
            if(i<0 || j<0 || k<0) return 0;
            if(dp[i][j][k] != -1) return dp[i][j][k];
            
            int ans = 0;
            ans = max(ans, lcs(a, b, c, i-1, j-1, k-1) + (a[i]==b[j] && a[i]==c[k]));
            ans = max(ans, lcs(a, b, c, i-1, j, k));
            ans = max(ans, lcs(a, b, c, i, j-1, k));
            ans = max(ans, lcs(a, b, c, i, j, k-1));
            
            return dp[i][j][k] = ans;
        }

        int LCSof3 (string A, string B, string C, int n1, int n2, int n3)
        {
            dp = vector<vector<vector<int>>>(n1+1, vector<vector<int>>(n2, vector<int>(n3, -1)));
            return lcs(A, B, C, n1-1, n2-1, n3-1);
        }
};


//{ Driver Code Starts.

int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n1, n2, n3; cin >> n1 >> n2 >> n3;
        string A, B, C; cin >> A >> B >> C;
        Solution obj;
        cout << obj.LCSof3 (A, B, C, n1, n2, n3) << endl;
    }
}
// Contributed By: Pranay Bansal

// } Driver Code Ends