//{ Driver Code Starts
#include <iostream>
#include <map>
#include <algorithm>
#include <cstdlib>
#include<bits/stdc++.h>

using namespace std;


// } Driver Code Ends
class Solution{
  public:
  
    //Function to return the name of candidate that received maximum votes.
    vector<string> winner(string arr[],int n)
    {
        // Your code here
        // Return the string containing the name and an integer
        // representing the number of votes the winning candidate got
        map<string, int> vote_count;

        // Counting votes for each candidate
        for (int i = 0; i < n; ++i) {
            vote_count[arr[i]]++;
        }
    
        int max_votes = 0;
        string candidate;
    
        // Iterating through the map to find the candidate with maximum votes
        // In case of a tie, lexicographically smaller name is chosen
        for (auto& p : vote_count) {
            if (p.second > max_votes || (p.second == max_votes && p.first < candidate)) {
                candidate = p.first;
                max_votes = p.second;
            }
        }
    
        return {candidate, to_string(max_votes)};
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    
    for(int i=0;i<t;i++)
    {
        
        
        int n;
        cin>>n;
        
        string arr[n];
        
        for (int i=0;i<n;i++)
        cin>>arr[i];
        Solution obj;
        vector<string> result = obj.winner(arr,n);
        
        cout<<result[0] << " " << result[1] << endl;
    }
    return 0;
}

// } Driver Code Ends