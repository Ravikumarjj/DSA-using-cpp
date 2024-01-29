#include <bits/stdc++.h>
using namespace std;
bool check(int index,int k, vector<int>& arr,int sum){
    if(index==arr.size()){
        if(sum==k){
            return true;//using the technique to stop when we get the first subseq with sum k
        }
        else {
            return false;
        }
    }
    //edge case
    if(sum>k){ 
        return false;
    }
    sum+=arr[index];//as the code is returning true or false so we have to update the sum outside the function not like subset sum pblm
    if(check(index+1, k,arr,sum)==true) {
        return true;
        }
    sum-=arr[index];
    if(check(index+1, k,arr,sum)==true){ 
        return true;
        }
    return false;
}
bool isSubsetPresent(int n, int k, vector<int> &a)
{
    // Write your code here
    int sum=0;
    return check(0,k,a,sum);
    
}