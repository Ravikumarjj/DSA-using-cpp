#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
    bool areRotations(string s1,string s2)
    {
        // Your code here
        //if any string is rotated than we ccan find it in the double of the original string
        return((s1+s1).find(s2)!=string::npos);
    }
};

int main(){
    int t;
    cin>>t;
    while(t--){
        string a,b;
        cin>>a>>b;
        Solution obj;
        cout<<obj.areRotations(a,b)<<endl;
    }
    return 0;
}