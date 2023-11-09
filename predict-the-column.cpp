#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
    int columnWithMaxZeros(vector<vector<int>>arr,int N){
        
        // Your code here
        int ans=0;
        int index=-1;
        
        for(int i =0;i<N;i++){
            int currcol=0;
            for(int j=0;j<N;j++){
                if(arr[j][i]==0){
                    currcol++;
                }
            }
            if(ans<currcol){
                ans=currcol;
                index=i;
            }
            
            
        }
        return index;
        
        
    }
};

int main(){
    int testcase;
    cin>> testcase;
    while(testcase--){
        int N;
        cin>>N;
        vector<vector<int>> arr(N,vector<int>(N));
        for(int i=0;i<N;i++){
            for(int j=0;j<N;j++){
                int x;
                cin>>x;
                arr[i][j]=x;
            }
        }
        Solution obj;
        cout<<obj.columnWithMaxZeros(arr, N)<<endl;
    }
    return 0;
}