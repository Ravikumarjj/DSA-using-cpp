#include <bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    //Function to reverse words in a given string.
    string reverseWords(string s) 
    { 
        // code here 
      stringstream ss(s);
       vector<string>str;
       
       string a;
       
       while(getline(ss,a,'.'))
       {
           str.push_back(a);
       }
       reverse(str.begin(),str.end());
       string ans ="";
       for(auto x:str)
       {
           ans+=x+".";
       }
       ans.pop_back();
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
        cout<<obj.reverseWords(s)<<endl;
    }
}