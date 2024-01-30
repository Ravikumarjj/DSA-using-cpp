//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    //Complete this function
    
       void solve(int ind,int n,string &s,vector<string>&ans)
    {
        //base case
        //using swapping
        if(ind==n)
        {
            ans.push_back(s);
            return;
        }
        
        //conditions
        for(int i=ind;i<n;++i)
        {
            swap(s[ind],s[i]);
            solve(ind+1,n,s,ans);
            swap(s[ind],s[i]); //backtrack
        }
    }
    public:
    //Complete this function
    
    vector<string> permutation(string S)
    {
       int n=S.size();
       vector<string>ans;
       solve(0,n,S,ans);
       sort(ans.begin(),ans.end());
       return ans;
    }
};

//{ Driver Code Starts.

int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		string S;
		cin>>S;
		Solution ob;
		vector<string> vec = ob.permutation(S);
		for(string s : vec){
		    cout<<s<<" ";
		}
		cout<<endl;
	
	}
	return 0;
}
// } Driver Code Ends