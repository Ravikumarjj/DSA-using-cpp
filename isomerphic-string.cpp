#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
    bool areIsomorphic(string str1, string str2)
    {
        
        // Your code here
        if(str1.size()!=str2.size())return false;
        unordered_map<char,char> mp1,mp2;
        for(int i =0;i<str1.size();i++){
            if((mp1.find(str1[i])!=mp1.end() && mp1[str1[i]]!=str2[i]) || (mp2.find(str2[i])!=mp2.end() && mp2[str2[i]]!=str1[i])) return false;
            mp1[str1[i]]=str2[i];
            mp2[str2[i]]=str1[i];
        }
        return true;
    }
};

int main(){
    int t;
    cin>>t;
    string s1,s2;
    while(t--){
        cin>>s1;
        cin>>s2;
        Solution obj;
        cout<<obj.areIsomorphic(s1,s2)<<endl;
    }
    return 0;
}