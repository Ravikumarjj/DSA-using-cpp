// Product of three number -- my first codeforce question
#include <bits/stdc++.h>
using namespace std;
void findThreeNumbers(int n){
    int a=1,b=1,c=1;
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            a=i;
            break;
        }
    }
    n=n/a;
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            if(i!=a){
                b=i;
            }
            if((n/i)!=i){
                if((n/i)!=a){
                    b=min(b,n/i);
                }
            }
        }
    }
    c=n/b;
    if(a!=b && b!=c && c!=1){
        cout<<"YES"<<endl;
        cout<<a<<" "<<b<<" "<<c<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}

int main(){
    int t;
    cin>>t;
    vector<int> a;
    while(t--){
        int n;
        cin>>n;
        a.push_back(n);
    }
    for(int i=0;i<a.size();i++){
        findThreeNumbers(a[i]);
    }
}