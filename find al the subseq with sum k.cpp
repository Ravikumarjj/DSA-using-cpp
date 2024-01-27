#include <bits/stdc++.h>
using namespace std;

vector<int> printSubseq(int ind, vector<int>& ds, int a[], int n,int sum,int k){
    if(ind == n){
        if(sum==k){
             return ds;
        }
    }
    ds.push_back(a[ind]);
    sum+=a[ind];
    printSubseq(ind+1,ds,a,n,sum,k);
    ds.pop_back(a[ind]);
    sum-=a[ind];
    printSubseq(ind+1,ds,a,n,sum,k);
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i =0;i<n;i++){
         cin>>arr[i];  
    }
    int k;
    cin>>k;
    vector<int> ds;
    int sum=0;
    vector<vector<int>> ans;
    ans.push_back(printSubseq(0,ds,arr,n,sum,k));
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
}