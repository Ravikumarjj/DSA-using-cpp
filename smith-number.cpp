//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution {
  public:
    int smithNum(int n) {
        int arr[n+1]={0};
        int sum[n+1]={0};
        // Sum of the digits of number
        for(int i=1;i<=n;i++){
            int j = i;
            while(j>0){
                sum[i]+=j%10;
                j/=10;
            }
        }
        // greatest prime factor for each number
        for(int i=2;i<=n;i++){
            if(arr[i] != 0) continue;
            arr[i] = i;
            for(int j=2*i;j<=n;j+=i){
                arr[j] = i;
            }
        }
        
        int x = n;
        int factorSum = 0;
        while(arr[x] > 0){
            factorSum += sum[arr[x]];
            x=x/arr[x];
        }
        
        if(arr[n] == n) factorSum = 0;
        
        
      return factorSum==sum[n];
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        
        cin>>n;

        Solution ob;
        cout << ob.smithNum(n) << endl;
    }
    return 0;
}
// } Driver Code Ends