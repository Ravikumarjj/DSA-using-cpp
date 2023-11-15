#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
    string betterString(string str1, string str2) {
        // code here
        int a=countSub(str1);
        int b=countSub(str2);
        if(a<b){
            return str2;
        }
        return str1;
        
    }
    static int countSub(const string& str){
        int n=str.length();
        int dp[n+1];
        unordered_map<char,int> last;
        dp[0]=1;
        for(int i=1;i<=n;i++){
            dp[i]=2*dp[i-1];
            if(last.find(str[i-1])!=last.end()){
                dp[i]=dp[i]-dp[last[str[i-1]]];
            }
            last[str[i-1]]=i-1;
        }
        return dp[n];
        
    }
};

int main(){
    int t;
    cin>>t;
    while(t--){
        string a,b;
        cin>>a>>b;
        Solution obj;
        cout<<obj.betterString(a,b)<<endl;
    }
    return 0;
}