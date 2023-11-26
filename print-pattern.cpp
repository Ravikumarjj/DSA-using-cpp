//print the pattern without using loop eg 16 11 6 1 -4 1 6 11 16
#include <bits/stdc++.h>
using namespace std;

// User function Template for C++a

class Solution{
public:
    void fun(int N, vector<int> &res){
        if(N<=0){
            res.push_back(N);
            return;
        }
        res.push_back(N);
        fun(N-5,res);
        res.push_back(N);
    }
    vector<int> pattern(int N){
        // code here
        vector<int> res;
        fun(N,res);
        return res;
    }
};


int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        
        Solution ob;
        vector<int> ans = ob.pattern(N);
        for(int u: ans)
            cout<<u<<" ";
        cout<<"\n";
    }
    return 0;
}
