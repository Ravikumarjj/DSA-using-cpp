//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;
#define ll long long

// } Driver Code Ends
//User function template for C++
class Solution{
public:
	// #define ll long long
	ll countStrings(int n) {
	    // code here
	    /*we observe that  
	        when n=1 ans=2,

            when n=2, ans=3,

            when n=3, ans=2+3=5,

            when n=4, ans=3+5=8;*/
	     int mod=1e9+7;
	    if(n==1) return 2;
	    if(n==2) return 3;
	    ll pre1=2, pre2=3;
	    for(int i=3; i<=n; ++i){
	        ll x=(pre2%mod+pre1%mod)%mod;
	        pre1=pre2;
	        pre2=x;
	    }
	    return pre2;
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        auto ans = ob.countStrings(n);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends