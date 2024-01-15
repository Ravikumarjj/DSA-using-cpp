//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    int max_courses(int n, int total, vector<int> &cost)
    {
        //Code Here
        vector<int> curr(total + 1);
        for(int ind = n - 1; ind >= 0; ind--){
            for(int tot = total; tot >= 0; tot--){
                if(tot >= cost[ind])
                    curr[tot] = max(curr[tot], 1 + curr[tot - 0.1 * cost[ind]]);
            }
        }
        return curr[total];
    }
};


//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int k;
        cin>>k;
        vector<int> arr(n);
        for(int i=0;i<n;i++) cin>>arr[i];
        Solution ob;
        cout<<ob.max_courses(n,k,arr)<<endl;
    }
}
// } Driver Code Ends