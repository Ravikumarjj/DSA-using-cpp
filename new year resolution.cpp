//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution {
    
    public:
    int isPossible(int N , int coins[]) 
    {
         vector<int> canEarn(2025,0);
        canEarn[0] = 1;
        for(int i=0;i<N;i++){ 
        for(int c=2024;c>=coins[i];c--){ 
            canEarn[c] |= canEarn[c-coins[i]];
            
        }
            
        }
        for(int c=20;c<=2024;c+=20){
            
         if(canEarn[c]) return 1;
    }
        for(int c=24;c<=2024;c+=24){
            
        if(canEarn[c]) return 1;
        }
        return canEarn[2024];
    }
    
};




//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        
        cin>>N;
        int coins[N];
        for(int i=0 ; i<N ; i++)
            cin>>coins[i];

        Solution ob;
        cout << ob.isPossible(N,coins) << endl;
    }
    return 0;
}
// } Driver Code Ends