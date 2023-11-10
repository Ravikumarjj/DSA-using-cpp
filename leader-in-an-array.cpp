#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
    vector<int> leaders(int arr[], int n){
        // Code here
        vector<int> v;
        int lm=INT_MIN;
        for(int i= n-1;i>=0;i--){
            lm=max(lm,arr[i]);
            if(lm==arr[i]){
                v.push_back(arr[i]);
            }
        }
        reverse(v.begin(),v.end());
        return v;
        
    }

};

int main(){
    long long t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;//total size of an array
        int a[n];
        for(long long i=0;i<n;i++){
            cin>>a[i];
        }
        Solution obj;
        vector<int> v = obj.leaders(a,n);
        for(auto it=v.begin();it!=v.end();it++){
            cout<<*it<<" ";
        }
        cout<<endl;
    }
}