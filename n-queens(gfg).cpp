//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    void solve(vector<vector<int>>&ans, vector<int>&temp,int n,int col,vector<int>&left,vector<int>&up,vector<int>&dw){
           if(col==n){
               ans.push_back(temp);
               return;
           }
           
           for(int row=0 ; row<n ; row++){
               if(left[row]==0 && up[n-1+col-row]==0 && dw[row+col]==0){
                  left[row]=1; up[n-1+col-row]=1; dw[row+col]=1;
                  temp.push_back(row+1);//return the postion of row where is can positioned
                  solve(ans,temp,n,col+1,left,up,dw);
                  temp.pop_back();
                  left[row]=0; up[n-1+col-row]=0; dw[row+col]=0;
               }
           }
    }
    vector<vector<int>> nQueen(int n) {
        // code here
        vector<vector<int>>ans;
        vector<int>temp;
        
        vector<int>left(n,0),up(2*n-1,0),dw(2*n-1,0);
        solve(ans,temp,n,0,left,up,dw);
        
        return ans;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        
        Solution ob;
        vector<vector<int>> ans = ob.nQueen(n);
        if(ans.size() == 0)
            cout<<-1<<"\n";
        else {
            for(int i = 0;i < ans.size();i++){
                cout<<"[";
                for(int u: ans[i])
                    cout<<u<<" ";
                cout<<"] ";
            }
            cout<<endl;
        }
    }
    return 0;
}
// } Driver Code Ends