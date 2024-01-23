//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;



// } Driver Code Ends
//User function Template for C++

class Solution
{
    public:
    long long divide(long long dividend, long long divisor) 
    {
        //code here
        int sign = (dividend<0)^(divisor<0)?-1:1;
        dividend = abs(dividend);
        divisor = abs(divisor);
        long long quotient = 0;
        for(int i = 31;i>=0;i--){//as we use the 32 bit int for the question but long long so that sign bit isn ot affect with 64 bit space
            if((divisor<<i)<=dividend){
                dividend-=(divisor<<i);
                quotient|=1LL<<i;   //adding the 2^i wiht the help of OR operator
            }
        }
        return (sign==-1)? -quotient: quotient;
    }
};

//{ Driver Code Starts.
int main() {
	int t;
	cin >> t;

	while (t--)
	{

		long long a, b;
		cin >> a >> b;
		
		Solution ob;
		cout << ob.divide(a, b) << "\n";
	}

	return 0;
}

// } Driver Code Ends