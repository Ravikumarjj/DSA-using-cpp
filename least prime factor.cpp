//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    vector<int> leastPrimeFactor(int N) {
        // using sieve technique to make a sieve array that hold index corresponding there least prime factor
        vector<int> leastprime(N+1);
        for(int i=0;i<=N;i++){
          leastprime[i]=i;
        }
        for(int i=2;i*i<=N;i++){
          if(leastprime[i]==i){
            for( int j=i*i;j<=N;j+=i){
              if(leastprime[j]==j){
                leastprime[j]=i;  
              } //this will keep updating the elment to its largest prime factor 
            }
          }
        }
        vector<int> ans;
        for(int i =0;i<=N;i++){
            ans.push_back(leastprime[i]);
        }
        return ans;
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
        vector<int>ans = ob.leastPrimeFactor(n);
        for(int i=1;i<=n;i++)cout<<ans[i]<<" ";
        cout<<endl;  
    }
    return 0;
}

// } Driver Code Ends