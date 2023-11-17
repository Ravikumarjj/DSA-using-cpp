#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
    int longestSubstrDistinctChars (string S)
{
    // your code here
    unordered_map<char, int>store;
    
    int i = 0;
    int j = 0;
    int ans = INT_MIN;
    int n = S.length();
    
    while(j < n){
        store[S[j]]++;
        
        if(store[S[j]] <= 1){
            ans = max(ans, j-i+1);
        }
        
        else{
            while(store[S[j]] > 1){
                store[S[i]]--;
                i++;
            }
        }
        j++;
    }
    
    return ans;
}
};

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        Solution obj;
        cout<<obj.longestSubstrDistinctChars(s)<<endl;
    }
    return 0;
}