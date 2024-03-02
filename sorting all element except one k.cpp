//{ Driver Code Starts
// CPP program to sort all elements except
// element at index k.
#include <bits/stdc++.h>
using namespace std;

int* sortExceptK(int arr[], int n, int k);


// Driver code
int main()
{
	int t,k,n;
	cin>>t;
	while(t--)
    {
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        cin>>k;
        int *ans;
        ans = sortExceptK(arr, n, k);
    	for (int i = 0; i < n; i++)
    		cout << ans[i] << " ";
		cout<<endl;
    }

}

// } Driver Code Ends


int* sortExceptK(int arr[], int n, int k)
{
	// Complete the function
	if(k>n){
	    sort(arr,arr+n);
	    return arr;
	}
	int temp=arr[k];
	arr[k]=INT_MIN;
	sort(arr,arr+n);
	for(int i=0;i<k;i++){
	    arr[i]=arr[i+1];
	}
	arr[k]=temp;
	return arr;
	
}
