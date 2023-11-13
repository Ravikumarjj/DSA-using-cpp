#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
    int shortestCommonSupersequence(string X, string Y, int m, int n)
    {
        //code here
        int dp[m+1][n+1];//finding the longest comman subseq and substracting with total lenght
        memset(dp, 0, sizeof(dp));
        for(int i=1;i<=m;i++){
            for(int j=1;j<=n;j++){
                if(X[i-1]==Y[j-1]){
                    dp[i][j]=1+dp[i-1][j-1];
                }
                else{
                    dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
                }
            }
        }
        return m+n-dp[m][n];
        
    }
};

int main(){
    int t;
    cin>>t;
    while(t--){
        string a,b;
        cin>>a>>b;
        Solution obj;
        cout<<obj.shortestCommonSupersequence(a,b,a.size(),b.size())<<endl;
    }
    return 0;
}