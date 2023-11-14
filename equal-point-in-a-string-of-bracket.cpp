#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
    int findIndex(string str) {
        // Your code goes here
         int count=0;
        for(int i=0;i<str.size();i++){
              if(str[i]==')'){
                  count++;
            }
        }
        return count;
    }
};
int main(){
    int t;
    cin>>t;
    while(t--){
        string a;
        cin>>a;
        Solution obj;
        cout<<obj.findIndex(a)<<endl;
    }
    return 0;
}
