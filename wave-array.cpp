#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
     // arr: input array
    // n: size of array
    //Function to sort the array into a wave-like array.
    void convertToWave(int n, vector<int>& arr){
        
        // Your code here
        int i,j;
        i=0;
        j=1;
        while(i<n && j<n){
            int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
            i+=2;
            j+=2;
        }
        
    }
};

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        Solution obj;
        obj.convertToWave(n,arr);
    }
}