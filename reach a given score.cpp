//{ Driver Code Starts
// Driver Code
#include<bits/stdc++.h>
#define ll long long int
using namespace std;

// } Driver Code Ends

class Solution
{
    public:
    // Complete this function
     int solve(int n,int num,int i,vector<int>& arr,vector<vector<int>>& dp)
    {
        if(n>num)
        {
            return 0;
        }
        
        if(n==num)
        {
            return 1;
        }
        
        if(dp[i][n]!=-1)
        {
            return dp[i][n];
        }
        
        int ans=0;
        
        for(int ind=i;ind<arr.size();ind++)
        {
            ans=ans+solve(n+arr[ind],num,ind,arr,dp);
        }
        
        return dp[i][n]=ans;
        
    }
    public:
    // Complete this function
    long long int count(long long int n)
    {
        // Your code here
        vector<int>arr={3,5,10};
        
        vector<vector<int>>dp(3,vector<int>(n+1,-1));
        
        return solve(0,n,0,arr,dp);
    }
};

//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		ll n;
		cin>>n;
		Solution obj;
		cout<<obj.count(n)<<endl;
	}
	return 0;
}
// } Driver Code Ends