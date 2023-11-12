#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
    int countWords(string list[], int n)
        {
           //code here.
           unordered_map<string,int> mp;
           int ans=0;
           for(int i =0;i<n;i++){
              mp[list[i]]++;
           }
           for(auto x : mp){
               if(x.second == 2) ans++;
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
        string list[n];
        for(int i =0;i<n;i++)
           cin>>list[n];
        Solution obj;
        cout<<obj.countWords(list,n)<<endl;
    }
    return 0;
}