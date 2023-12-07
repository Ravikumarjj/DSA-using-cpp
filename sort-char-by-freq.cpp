#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int> freq;
        for(auto c : s){
            freq[c]++;
        }

        vector<pair<char,int>> chars;
        for(auto& p : freq){
            chars.push_back(p);
        }

        sort(chars.begin(),chars.end(),[](const pair<char,int>& a, const pair<char,int>& b){
            return a.second>b.second;
        });
        string ans;
        for(auto& p : chars){
             ans+=string(p.second,p.first);
        }
        return ans;
        
    }
};
int main(){
    string s;
    Solution obj;
    cout<<obj.frequencySort(s);
    return 0;
}