#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
    string printMinNumberForPattern(string S){
        // code here 
        int n = S.size();
        vector<int> ans(n + 1);
        int no = 1;
    
        for (int i = 0; i <=n; i++) {
            if (i == n || S[i] == 'I') {
                ans[i] = no++;
                for (int j = i - 1; j >= 0 && S[j] == 'D'; j--) {
                    ans[j] = no++;
                }
            }
        }
    
        string result = "";
        for (int i = 0; i < ans.size(); i++) {
            result += to_string(ans[i]);
        }
    
        return result;
    }
};

int main(){
    int t;
    cin>>t;
    while(t--){
        string S;
        cin>>S;
        Solution obj;
        cout<<obj.printMinNumberForPattern(S)<<endl;

    }
    return 0;
}
