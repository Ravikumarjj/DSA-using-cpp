//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


class Matrix
{
public:
    template <class T>
    static void input(vector<vector<T>> &A,int n,int m)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                scanf("%d ",&A[i][j]);
            }
        }
    }
 
    template <class T>
    static void print(vector<vector<T>> &A)
    {
        for (int i = 0; i < A.size(); i++)
        {
            for (int j = 0; j < A[i].size(); j++)
            {
                cout << A[i][j] << " ";
            }
            cout << endl;
        }
    }
};


// } Driver Code Ends
class Solution {
  public:
    int isTree(int n, int m, vector<vector<int>> &edges) {
        unordered_set<int> adj1[n];
        vector<int> adj[n];
        for(int i=0;i<m;i++){
            // tree can't have self loops ........
            if( edges[i][0]  == edges[i][1]  ) return false;
            adj1[edges[i][0]].insert(edges[i][1]);
            adj1[edges[i][1]].insert(edges[i][0]);
        }
        for(int i=0;i<n;i++){
            for(auto it: adj1[i]){
                adj[i].push_back(it);
            }
        }
        vector<int> vis(n,0);
        queue<pair<int,int>>q;
        q.push({0,-1});
        vis[0]=1;
        while( !q.empty() ){
            int node=q.front().first;
            int par =q.front().second;
            q.pop();
            for(auto adjnode: adj[node]){
                if( adjnode != par ){
                    // tree can't have cycles ......
                    if( vis[adjnode] ){
                        return false;
                    }
                    else{
                        vis[adjnode] =1;
                        q.push({adjnode,node});
                    }
                }
            }
        }
        // tree can't have disconnected components ......
        for(int i=0;i<n;i++) if( vis[i] == 0 ) return false;
        return true;
    }
};


//{ Driver Code Starts.

int main(){
    int t;
    scanf("%d ",&t);
    while(t--){
        
        int n; 
        scanf("%d",&n);
        
        
        int m; 
        scanf("%d",&m);
        
        
        vector<vector<int>> edges(m, vector<int>(2));
        Matrix::input(edges,m,2);
        
        Solution obj;
        int res = obj.isTree(n, m, edges);
        
        cout<<res<<endl;
        
    }
}

// } Driver Code Ends