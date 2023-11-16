#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
    string removeDuplicates(string str) {
	    // code here
	    string ans="";
	    unordered_map<int,int> mp;
	    for(int i =0;i<str.length();i++){
	        if(mp.find(str[i])==mp.end()){
	        mp[str[i]]++;
	        ans+=str[i];
	        }
	    }
	    return ans;
	}
};

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        Solution obj;
        cout<<obj.removeDuplicates(s)<<endl;
    }
    return 0;
}