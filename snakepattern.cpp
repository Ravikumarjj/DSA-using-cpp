#include <bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    vector<int> snakePattern(vector<vector<int>> matrix){
        vector<int> ans;
        int r= matrix.size();
        int c= matrix[0].size();
        for(int i=0;i<r;i++){
            if(i%2==0){
                for(int j=0;j<c;j++){
                    ans.push_back(matrix[i][j]);
                }
            }
            else{
                for(int j=c-1;j>=0;j--){
                    ans.push_back(matrix[i][j]);
                }
            }
        }
        return ans;
    }
};

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<vector<int>> matrix(n);
        for(int i =0;i<n;i++){
            matrix[i].assign(n,0);
            for(int j=0;i<n;j++){
                cin>>matrix[i][j];
            }
        }
        Solution obj;
        vector<int> result = obj.snakePattern(matrix);
        for(int i =0;i<result.size();i++){
            cout<<result[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}