#include <bits/stdc++.h>
using namespace std;
void findCombination(int ind, int target, vector<int>& arr,vector<vector<int>>& ans, vector<int> ds){
        if(ind==arr.size()){
            if(target==0){
                ans.push_back(ds);
            }
            return;
        }
        if(arr[ind]<=target){
            ds.push_back(arr[ind]);
            findCombination(ind,target-arr[ind],arr,ans,ds);
            ds.pop_back();
        }
        findCombination(ind+1,target,arr,ans,ds);
    }
vector<vector<int>> combSum(vector<int> &ARR, int B)
{
    // Write your code here.
    vector<vector<int>> ans;
    vector<int> ds;
    sort(ARR.begin(),ARR.end());
    findCombination(0,B,ARR,ans,ds);
    return ans;
}