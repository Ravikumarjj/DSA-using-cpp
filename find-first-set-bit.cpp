#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
        //Function to find position of first set bit in the given number.
    unsigned int getFirstSetBit(int n)
    {
        // Your code here
        int count=0;
        while(n!=0){
            count++;
            if(n%2!=0){
                break;
            }
            n=n/2;
        }
        return count;
    }
};

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        Solution obj;
        cout<<obj.getFirstSetBit(n)<<endl;
    }
    return 0;
}