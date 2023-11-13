#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
    vector<int> printClosest(int arr[], int brr[], int n, int m, int x) {
        //code here
        vector<int>res;
        int i = 0,j = m-1,sum = 0 ;
        int dif = INT_MAX;
        
        int a = 0;
        int b = 0;
        while(i<n && j>=0){
            sum = arr[i]+brr[j];
            
            if(abs(sum-x)<dif){
                dif = abs (sum-x);
                a = arr[i];
                b = brr [j];
            }
            
            if(sum>x){
                j--;
            }
            else
               i++;
        }
        res.push_back(a);
        res.push_back(b);
        
        return res;
    }
};

int main(){
    int t;
    cin>>t;
    int m,n,x;
    while(t--){
        cin>>n>>m;
        int a[n],b[m];
        for(int i =0;i<n;i++){
            cin>>a[i];
        }
        for(int i =0;i<m;i++){
            cin>>b[i];
        }
        cin>>x;
        vector<int> ans;
        Solution ob;
        ans=ob.printClosest(a,b,n,m,x);
        cout<<abs(ans[0]+ans[1]-x)<<endl;   
    }
    return 0;
}
