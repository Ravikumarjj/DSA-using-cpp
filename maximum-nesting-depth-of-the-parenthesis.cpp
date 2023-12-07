#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxDepth(string s) {
        int count=0;
        int ans=INT_MIN;
        for(int i =0;i<s.length();i++){
            if(s[i]=='('){
                count++;
            }
            if(s[i]==')'){
                ans=max(count,ans);
                count--;
            }
        }
        if(ans>0) return ans;
        else return 0;
        
    }
};

int main(){
    string s;
    Solution obj;
    cout<<obj.maxDepth(s);
    return 0;
}