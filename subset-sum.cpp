#include <bits/stdc++.h>
using namespace std;
void solve(int ind,int sum,vector<int>& arr, vector<int>& ansArr){
	if(ind==arr.size()){
		ansArr.push_back(sum);
		return;
	}
	solve(ind+1,sum+arr[ind],arr,ansArr);
	solve(ind+1,sum,arr,ansArr);
}
vector<int> subsetSum(vector<int> &num){
	// Write your code here.
	vector<int> ansArr;
	int sum=0;
	solve(0,sum,num,ansArr);
	sort(ansArr.begin(),ansArr.end());
	return ansArr;

}