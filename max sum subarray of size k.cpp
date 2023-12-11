//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution{   
public:
    long maximumSumSubarray(int K, vector<int> &Arr , int N){
        // code here 
        int s=0;
        long maxi=INT_MIN;
        long ans=0;
        for(int i =0;i<K;i++){
            ans+=Arr[i];
            maxi=max(ans,maxi);
        }
        int e=K;
        while(e<N){
           ans+=Arr[e++];
           ans-=Arr[s++];
           maxi=max(ans,maxi);
        }
        return maxi;
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N,K;
        cin >> N >> K;;
        vector<int>Arr;
        for(int i=0;i<N;++i){
            int x;
            cin>>x;
            Arr.push_back(x);
        }
        Solution ob;
        cout << ob.maximumSumSubarray(K,Arr,N) << endl;
    }
    return 0; 
} 
// } Driver Code Ends