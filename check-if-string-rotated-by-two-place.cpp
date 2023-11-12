#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
     bool isRotated(string str1, string str2)
    {
        // Your code here
        int n=str1.length(),m=str2.length();
        string s1="",s2="";
        for(int i=2;i<n;i++)//to check if it is rotated from front
        {
            s1+=str1[i];
        }
        s1+=str1[0];
        s1+=str1[1];
        
        s2+=str1[m-2];//to check if it is two place rotated from back
        s2+=str1[m-1];
        for(int i =0;i<m-2;i++){
            s2+=str1[i];
        }
        if(s1.compare(str2)==0 || s2.compare(str2)==0){
            return 1;
        }
        else{
            return 0;
        }
    }
};

int main(){
    int t;
    cin>>t;
    while(t--){
        string a;
        string b;
        cin>>a>>b;
        Solution obj;
        cout<<obj.isRotated(a,b)<<endl;
    }
    return 0;
}