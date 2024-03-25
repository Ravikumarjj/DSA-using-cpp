//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	  void find(int n,vector<string>&ans,int count1,int count0,string s)
    {
        if(count0>count1)
        return;
        
        if(s.size()==n)
        {
            ans.push_back(s);
            return;
        }
        
        find(n,ans,count1+1,count0,s+'1');
        find(n,ans,count1,count0+1,s+'0');
    }
    
vector<string> NBitBinary(int n)
{
    // Your code goes here
    vector<string> ans;
    find(n,ans,0,0,"");
    
    return ans;
}
};

//{ Driver Code Starts.

int main() 
{
   	

   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	cin >> t;
   	while(t--)
   	{
   		int n;
   		cin >> n;
        Solution ob;
   		vector<string> ans = ob.NBitBinary(n);

   		for(auto i:ans)
   			cout << i << " ";

   		cout << "\n";
   	}

    return 0;
}
// } Driver Code Ends