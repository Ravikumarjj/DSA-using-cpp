//{ Driver Code Starts
//Initial template for C++
//program to check whether the sentence is panagram or not .. the sentence which have all the english alphabet
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution
{
  public:
    //Function to check if a string is Pangram or not.
    bool checkPangram (string s) {
        // your code here
         vector<bool>f(26,0);
        int n=s.length();
        if(n<26) return 0;
        for(int i=0; i<n; i++){
            if(s[i]>='A' && s[i]<='Z'){
                f[s[i]-'A']=1;
            }else if(s[i]>='a' && s[i]<='z'){
                f[s[i]-'a']=1;
            }
        }
        for(int i=0; i<26; i++){
            if(!f[i]) return 0;
        }
        return 1;
    }

};

//{ Driver Code Starts.

// Driver Program to test above functions
int main()
{
    int t;
    cin>>t;
    cin.ignore(INT_MAX, '\n');
    while(t--){
        string s;
        getline(cin, s);
        Solution obj;
        if (obj.checkPangram(s) == true)
            cout<<1<<endl;
        else
            cout<<0<<endl;
    }
    return(0);
}

// } Driver Code Ends