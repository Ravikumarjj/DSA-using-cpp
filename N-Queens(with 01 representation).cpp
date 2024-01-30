#include <bits/stdc++.h>
using namespace std;
void addSolution(vector<vector<int>>&ans,vector<vector<int>>&board,int n){

    vector<int>temp;

    for(int i=0;i<n;i++){

        for(int j=0;j<n;j++){

            temp.push_back(board[i][j]);

        }

    }

    ans.push_back(temp);

}

void solve(int col,vector<vector<int>>&ans,vector<vector<int>>&board,vector<int>&lr,

           vector<int>&ld,vector<int>&ud,int n){

      if(col==n){

          addSolution(ans,board,n);

          return;

      }

      for(int row=0;row<n;row++){

          if(lr[row]==0 && ld[row+col]==0 && ud[n-1+col-row]==0){

              board[row][col]=1;

              lr[row]=1;

              ld[row+col]=1;

              ud[n-1+col-row]=1;

              solve(col+1,ans,board,lr,ld,ud,n);

              board[row][col]=0;

              lr[row]=0;

              ld[row+col]=0;

              ud[n-1+col-row]=0;

          }

      }

}

vector<vector<int>> nQueens(int n)

{

    vector<vector<int>>ans;

    vector<vector<int>>board(n,vector<int>(n,0));

     vector<int>lr(n,0),ld(2*n-1,0),ud(2*n-1,0);

        solve(0,ans,board,lr,ld,ud,n);

        return ans;

}