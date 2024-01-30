#include <bits/stdc++.h>
using namespace std;
void solve(int ind,int k,int target,vector<int>& temp,vector<vector<int>>& ans,vector<int>& arr){
      if(target == 0 && k==0 ){

        ans.push_back(temp);

        return ;

    }

 

    for(int i = ind ; i < arr.size() ; i++){

        if(k<0 ) continue ;

        if(arr[i]>target) break ;

        temp.push_back(arr[i]);

        solve(i+1,k -1 , target - arr[i] , temp, ans, arr);

        temp.pop_back();

    }

}

 

vector<vector<int>> combinationSum(int k, int n) {

   vector<int>arr = {1,2,3,4,5,6,7,8,9};

   vector<vector<int>>ans ;

   vector<int>temp;

   solve(0,k,n,temp,ans, arr);

   return ans ;
}