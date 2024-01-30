//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution
{
    public:
    void solve(int ind,vector<int>& arr,vector<int>& ds,vector<vector<int>>& ans){
        if(ind==arr.size()){
            ans.push_back(ds);
            return;
        }
        ds.push_back(arr[ind]);
        solve(ind+1,arr,ds,ans);
        ds.pop_back();
        solve(ind+1,arr,ds,ans);
    }
    vector<vector<int> > subsets(vector<int>& A)
    {
        //code here
        vector<int> ds;
        vector<vector<int>> ans;
        solve(0,A,ds,ans);
        sort(ans.begin(),ans.end());
        return ans;
    }
};

//{ Driver Code Starts.

int main()
{
	int t;
	cin >> t;

	while (t--)
	{
		int n, x;
		cin >> n;

		vector<int> array;
		for (int i = 0; i < n; i++)
		{
			cin >> x;
			array.push_back(x);
		}
        
        
        Solution ob;
		vector<vector<int> > res = ob.subsets(array);

		// Print result
		for (int i = 0; i < res.size(); i++) {
			for (int j = 0; j < res[i].size(); j++)
				cout << res[i][j] << " ";
			cout << endl;
		}

		
	}

	return 0;
}
// } Driver Code Ends