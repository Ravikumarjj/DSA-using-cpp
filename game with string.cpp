//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    int minValue(string s, int k){
        // code here
        priority_queue<int> pq;
        map<char,int> mp;
        int ans = 0;
        for(int i = 0; i < s.size(); i++)
        {
            mp[s[i]]++;
        }
        for(auto itr = mp.begin(); itr!=mp.end(); itr++)
        {
            pq.push(itr->second);
        }
        while(k)
        {
            int temp = pq.top();
            pq.pop();
            temp--;
            pq.push(temp);
            k--;
        }
        while(pq.size())
        {
            int temp = pq.top();
            pq.pop();
            ans+=(temp*temp);
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        int k;
        cin>>s>>k;
        
        Solution ob;
        cout<<ob.minValue(s, k)<<"\n";
    }
    return 0;
}
// } Driver Code Ends