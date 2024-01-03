//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int smallestSubstring(string S) {
        // Code here
        int zero = 0,one = 0,two = 0;
        int i = 0;
        int len = INT_MAX;;
        
        for(int j = 0;j<S.length();++j) {
            if(S[j] == '0') zero++;
            else if(S[j] == '1') one++;
            else two++;
            
            while(zero && one && two) {
                len = min(len,j-i+1);
                if(S[i] == '0') zero--;
                else if(S[i] == '1') one--;
                else two--;
                i++;
            }
        }
        
        return len == INT_MAX ? -1 : len;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string S;
        cin >> S;
        Solution ob;
        cout << ob.smallestSubstring(S);
        cout << endl;
    }
}
// } Driver Code Ends