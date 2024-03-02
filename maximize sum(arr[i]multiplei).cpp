//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    private:
    int const mod = 1e9+7;
    public:
    int Maximize(int a[],int n)
    {
        // Complete the function
        sort(a,a+n);
        long long ans=0;
        for(int i=0;i<n;i++){
            ans+=(1ll*a[i]*i);
            ans%=mod;
        }
        return (int)ans;
    }
};

//{ Driver Code Starts.
int main(){

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        Solution ob;
        cout<<ob.Maximize(a,n)<<endl;
    }
}
// } Driver Code Ends