//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	public:
	int f(int i,int prev,string &str,int n,vector<vector<int>>&dp)
    {
        if(i==n)
        {
            return 1;
        }
        if(dp[i][prev] != -1)
        {
            return dp[i][prev];
        }
        int sum=0,ways=0;
        for(int ind=i;ind<n;ind++)
        {
            sum+=str[ind]-'0';
            if(sum >= prev)
            {
                ways+=f(ind+1,sum,str,n,dp);
            }
        }
        return dp[i][prev]=ways;
    }
    int TotalCount(string str){
        // Code here
        int n=str.size();
        vector<vector<int>> dp(n,vector<int>(900+1,-1));//since N is till 900 and max value of each digit is 9
        return f(0,0,str,n,dp);//dp[ind][prev] -> no of ways to reach ind with prev sum as prev
    }

};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string str;
		cin >> str;
		Solution ob;
		int ans = ob.TotalCount(str);
		cout << ans <<"\n";
	}
	return 0;
}
// } Driver Code Ends