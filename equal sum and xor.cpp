//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
#include <iostream>
using namespace std;
 

int countValues (int n);
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		
		cout<<countValues(n)<<endl;
	}
}
// } Driver Code Ends


/*You are required to complete this method */
int countValues (int n)
{
   //we can use the formula the n+i=n^i + 2*(n&i) so here n&i need to be zero
   int unset_bits = 0;
   while(n){
       if((n&1)==0){//inorder to check the unsetbits that give possible of 2 values
           unset_bits++;
       }
       n=n>>1;
   }
   return 1<<unset_bits;//for the 2 power the unsetbits
}
 