#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
    bool isAnagram(string a, string b){
        
        // Your code here
        int no_of_char = 256;
        int count1[no_of_char]={0};
        int count2[no_of_char]={0};
        int i; //to use its updated value out of the loop 
        
        for( i =0;a[i] && b[i];i++){
            count1[a[i]]++;
            count2[b[i]]++;
        }
         //checking for if there is any different in length , if any then one wll have extra element
        if(a[i] || b[i]){
            return false;
        }
        
        for(int i =0;i<no_of_char;i++){
            if(count1[i]!=count2[i]){
                return false;
            }
        }
        return true;

    }
};

int main(){
    int t;
    cin>>t;
    while(t--){
        string a,b;
        cin>>a>>b;
        Solution obj;
        if(obj.isAnagram(a,b)) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
