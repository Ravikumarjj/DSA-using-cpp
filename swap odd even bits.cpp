//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution
{
    public:
    //Function to swap odd and even bits.
    unsigned int swapBits(unsigned int N)
    {
    	// Get all even bits of x as 0xAAAAAAAA have all even position bits as 1
        unsigned int even_bits = N & 0xAAAAAAAA;
     
        // Get all odd bits of x as 0x55555555 have all odd position bits as 0
        unsigned int odd_bits = N & 0x55555555;
         
          // Right shift even bits to change the position of each
        even_bits >>= 1;
       
          // Left shift odd bits
        odd_bits <<= 1;
     
          // Combine even and odd bits
        return (even_bits | odd_bits);
    }
};

//{ Driver Code Starts.

// Driver code
int main()
{
	int t;
	cin>>t;//testcases
	while(t--)
	{
		unsigned int n;
		cin>>n;//input n
		
		Solution ob;
		//calling swapBits() method
		cout << ob.swapBits(n) << endl;
	}
	return 0;
}
// } Driver Code Ends