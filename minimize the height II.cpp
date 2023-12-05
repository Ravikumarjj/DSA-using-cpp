//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    int getMinDiff(int arr[], int n, int k) {
        // code here
        sort(arr, arr + n);
        int maxi = arr[n - 1], mini = arr[0], res = arr[n - 1] - arr[0];
        
        for (int i = 0; i < n - 1; i++) {
            if (arr[i + 1] - k < 0)
                continue;
                
            mini = min(arr[0] + k, arr[i + 1] - k); // there will be two partition, first array minimum will be arr[0] + k and second array minimum will be arr[i + 1] - k
            maxi = max(arr[i] + k, arr[n - 1] - k); // there will be two partition, first array maximum will be arr[i] + k and second array maximum will be arr[n - 1] - k
            
            res = min(res, maxi - mini);
        }
        
        return res;
    }
    
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> k;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.getMinDiff(arr, n, k);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends