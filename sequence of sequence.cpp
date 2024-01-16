//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int dp[101][101];
    int func(int m, int n, int i, int j){
        if(i==n) return 1;
        if(j>m) return 0;
        if(dp[i][j]!=-1) return dp[i][j];
        int take = 0, notTake = 0; 
        
        take = func(m, n, i+1, 2*j);
        notTake = func(m, n, i, j+1);
        
        return dp[i][j] = take+notTake;
    }
    int numberSequence(int m, int n){
        // code here
        memset(dp, -1, sizeof(dp));
        return func(m, n, 0, 1);
    }
};

//{ Driver Code Starts.
int main(){
    int t;
    cin>>t;
    while(t--){
        int m, n;
        cin>>m>>n;
        
        Solution ob;
        cout<<ob.numberSequence(m, n)<<endl;
    }
    return 0;
}
// } Driver Code Ends