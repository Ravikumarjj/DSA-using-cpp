//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution
{
    public:
    //boolean array
    bool primes[1000001];
    //Now using sieve of eratosthenes to generate primes.
    void Sieve(void){
        memset(primes,true, sizeof(primes));
        primes[1]=false;
        for(long long int p =2;p*p<sizeof(primes);p++){
            if(primes[p]==true){
                for(long long int i =p*p;i<=sizeof(primes);i+=p)
                  primes[i]=false;
            }
        }
        //after this code the indices with value true will be prime
    }
    int minNumber(int arr[],int N)
    {
     Sieve(); // Sieve algorithm
        long long int sum = 0;
        sum = accumulate(arr , arr + N , sum); // sum of array
        
        // find prime equal to or just after 'sum'
        for(long long int j = sum ; ; j++)
            if(primes[j] == true)
                return j - sum;
                
        return 0;   
    }
};


//{ Driver Code Starts.

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        Solution obj;
        cout << obj.minNumber(arr, n)<<endl;
    }
    return 0;
}
// } Driver Code Ends