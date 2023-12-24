//{ Driver Code Starts
/* Driver program to test above function */

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
public:
    int buyMaximumProducts(int n, int k, int price[]){
        //Write your code here
        vector<pair<int,int>> vep;
        for(int i=0;i<n;i++)
        { 
            vep.push_back({price[i],i+1});
        }
        sort(vep.begin(),vep.end());
        int i=0;
        int ans=0;
        while(i<n && k>0)
        {
            while(vep[i].second!=0&&k>=vep[i].first)
            {
                k-=vep[i].first;
                ans++; 
                vep[i].second--;
            }
            i++;
        }
        return ans;
    }
};


//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n, k;
	    cin >> n >> k;
	    int price[n];
	    for(int i = 0 ; i < n; i++){
	        cin >> price[i];
	    }
	    Solution ob;
	    int ans = ob.buyMaximumProducts(n, k, price);
	    cout << ans<<endl;
	}
	return 0;
}

// } Driver Code Ends