#include <bits/stdc++.h>
using namespace std;
class solution{
      public:
      int countMinPrime(int N){
           int n =1000000;
           vector<int> prime(n+1,1);
           prime[0]=prime[1]=0;
           for(int i =2;i*i<=n;i++){
            if(prime[i]==1){
                for(int j=i*i;j<=n;j+=i){
                    if(prime[j]!=0){
                        prime[i]++;//will keep counting the element whth the min factor as i
                        prime[j]=0;
                    }
                }
            }
           }
           return prime[N];
      }
};

int main(){
    solution obj;
    int n;
    cin>>n;
    cout<<obj.countMinPrime(n)<<endl;
    return 0;
}