#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
    int firstRepeated(int arr[], int n) {
        // code here
        unordered_map<int,int> mp;
        for(int i =0;i<n;i++){
            mp[arr[i]]++;
        }
        for(int i=0;i<n;i++){
            if(mp[arr[i]]>1){
                return i+1;
                break;
            }
        }
        return -1;
        
    } 
};

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++) cin>>arr[i];
        Solution obj;
        cout<<obj.firstRepeated(arr,n)<<endl;
    }
    return 0;
}