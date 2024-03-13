//{ Driver Code Starts

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
/*You are required to complete this method */

class Solution{
  public:
    vector<int> matrixDiagonally(vector<vector<int>>&mat)
    {
         //Your code here
         int r = 0;
        int c = 0;
        
        int n = mat.size();
        
        vector<int> ans;
        
        int count = 0;
        
        while(count < n*n){
            
            ans.push_back(mat[r][c]);
            
            // increase the count;
            count++;
            
            if(count >= n*n) break;
            
            // move right
            if(c + 1 < n){
                c++;
            }
            // can't move right, move down
            else{
                r++;
            }
            
            
            // go diagonally down
            while(r < n - 1 && c > 0){
                ans.push_back(mat[r][c]);
                count++;
                r++;
                c--;
            }
            
            ans.push_back(mat[r][c]);
            
            // increase the count;
            count++;
            
            
            // go down
            if(r + 1 < n){
                r++;
            }
            // go right
            else{
                c++;
            }
            
            
            // go diagonally up
            while(r > 0 && c < n - 1){
                ans.push_back(mat[r][c]);
                count++;
                r--;
                c++;
            }
        
        }
        
        return ans;
        
    }
};


//{ Driver Code Starts.
int main()
{
    int T;
    cin>>T;
  
    while(T--)
    {
        int n;
        int k=0;
        //cin>>k;
        cin>>n;
        vector<vector<int>>mat(n, vector<int>(n));
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                cin >> mat[i][j];
            }
        }
        Solution obj;
        vector<int>ans = obj.matrixDiagonally(mat);
        for(auto i: ans)cout << i << " ";
        cout << "\n";
        
       
    }
}
// } Driver Code Ends