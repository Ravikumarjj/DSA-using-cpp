//{ Driver Code Starts
// C++ program to find largest subarray sum with
// at-least k elements in it.
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:    
    long long int maxSumWithK(long long int a[], long long int n, long long int k) 
    {
        long long int ans=INT_MIN;
        long long int curr_sum=0;
        long long int front_sum=0;
        long long int front_pointer=0;
        long long int curr_pointer=0;
        
        while(curr_pointer<k){
            curr_sum+=a[curr_pointer];
            curr_pointer++;
        }
        
        ans=curr_sum;
        
        while(curr_pointer<n){
            curr_sum+=a[curr_pointer];
            curr_pointer++;
            front_sum+=a[front_pointer];
            front_pointer++;
            if(front_sum<0){
                curr_sum-=front_sum;
                front_sum=0;
            }
            ans=max(ans,curr_sum);
        }
        
        return ans;
    }
};

//{ Driver Code Starts.

// Driver code
int main() {
    long long int t;
    cin >> t;
    while (t--) {
        long long int n, k, i;
        cin >> n;
        long long int a[n];
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        cin >> k;
        Solution ob;
        cout << ob.maxSumWithK(a, n, k) << endl;
    }
    return 0;
}

// } Driver Code Ends