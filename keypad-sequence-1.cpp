#include <bits/stdc++.h>
using namespace std;
string printSequence(string input);
int main(){
    int t;
    cin>>t;
    cin.ignore();
    while(t--){
        string s;
        getline(cin,s);
        cout<<printSequence(s)<<endl;
    }
    return 0;
}
string printSequence(string S)
{
    //code here.
    string ans="";
    string str[]
        = { "2",   "22",  "222", "3",   "33",   "333", "4",
            "44",  "444", "5",   "55",  "555",  "6",   "66",
            "666", "7",   "77",  "777", "7777", "8",   "88",
            "888", "9",   "99",  "999", "9999" };
    for(int i =0;i<S.length();i++){
        if(S[i] == ' '){
           ans+="0"; 
        }
        else{
            int pos = S[i]-'A';
            ans+=str[pos];
        }
    }
    return ans;
}