//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
	
	void shuffleArray(int arr[],int n)
	{
	    // Your code goes here
	    int maxi = 1e3+1;
	    int j=0;
	    for(int i=0;i < n; i+=2)
	    {
	        int val = arr[j++]%maxi;
	        arr[i]+= (maxi*val);
	    }
	    j = n/2;
	    for(int i=1;i < n;i+=2)
	    {
	        int val = arr[j++]%maxi;
	        arr[i]+=(maxi*val);
	    }
	    
	    for(int i=0;i < n;i++)
	        arr[i] = arr[i]/maxi;
	}

		 

};

//{ Driver Code Starts.


int main() 
{
   
   
   	int t;
    cin >> t;
    while (t--)
    {
    	int n;
	    cin>>n;
	    int a[n] ;
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }


       

        Solution ob;
        ob.shuffleArray(a, n);

		for (int i = 0; i < n; i++) 
			cout << a[i] << " ";
    
	
        
	    cout << "\n";
	     
    }
    return 0;
}
// } Driver Code Ends