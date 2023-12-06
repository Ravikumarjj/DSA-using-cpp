//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int countDigit(int num, int target){
        int count=0;
        while(num){
            int digit = num%10;
            if(digit == target) count++;
            num/=10;
        }
        return count;
    }
    int countX(int L, int R, int X) {
        // code here
        int ans=0;
        for(int i=L+1;i<R;i++){
            ans+=countDigit(i,X);
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int L, R, X;
        cin >> L >> R >> X;
        Solution ob;
        int ans = ob.countX(L, R, X);
        cout << ans << "\n";
    }
}

// } Driver Code Ends