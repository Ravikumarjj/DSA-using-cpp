#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
    int sameChar(string A, string B)
    {
        // code here 
        int  ans=0;
        int len = A.length();
        for(int i = 0;i<len;i++){
            if(tolower(A[i])==tolower(B[i])){
                ans++;
            }
        }
        return ans;
    }
};

int main(){
    int t;
    cin>>t;
    while(t--){
        string a,b;
        cin>>a>>b;
        Solution obj;
        cout<<obj.sameChar(a,b)<<endl;
    }
    return 0;
}