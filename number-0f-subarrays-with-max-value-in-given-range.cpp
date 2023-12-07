//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution{
    public:
    long countLR(int arr[], int n, int X){
        long count=0;
        long sum=0;
        for(int i=0;i<n;i++){
            if(arr[i]>X){
                sum +=(count*(count+1))/2;
                count=0;
            }else{
                count++;
            }
        }
        sum +=(count*(count+1))/2;
        return sum;
    }
    
    long countSubarrays(int a[], int n, int L, int R)
    {
        // Complete the function
        return countLR(a, n, R)-countLR(a, n, L-1);
        
        
    }
};

//{ Driver Code Starts.
// driver program
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        
        int n ,l,r;
        cin >> n>>l>>r;
        int a[n];
        for(int i=0;i<n;i++)
        cin >> a[i];
        Solution ob;
    	cout << ob.countSubarrays(a, n, l, r)<<endl;
    }
	return 0;
}

// } Driver Code Ends