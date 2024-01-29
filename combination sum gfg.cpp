// print unique and repeating allowed in same index 
//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution {
  public:
    //Function to return a list of indexes denoting the required 
    //combinations whose sum is equal to given number.
    void findCombination(int ind, int target, vector<int>& arr,vector<vector<int>>& ans, vector<int> ds){
        if(target==0){
		ans.push_back(ds);
		return;
	}
	//using loop way to avoid the duplicate 
	for(int i=ind;i<arr.size();i++){
		if(i>ind && arr[i]==arr[i-1])continue;
		if(arr[i]>target)break;
		ds.push_back(arr[i]);
		findCombination(i,target-arr[i],arr,ans,ds);//not increasing the ind bcoz we can use as many as from one index
		ds.pop_back();
	}
    }
    vector<vector<int>> combinationSum(vector<int> &A, int B)
    {
        // Write your code here.
        vector<vector<int>> ans;
        vector<int> ds;
        sort(A.begin(),A.end());
        findCombination(0,B,A,ans,ds);
        return ans;
    }
    
};

//{ Driver Code Starts.
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> A;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            A.push_back(x);
        }   
        int sum;
        cin>>sum;
        Solution ob;
        vector<vector<int>> result = ob.combinationSum(A, sum);
   		if(result.size()==0){
   			cout<<"Empty";
   		}
        for(int i=0;i<result.size();i++){
            cout<<'(';
            for(int j=0;j<result[i].size();j++){
                cout<<result[i][j];
                if(j<result[i].size()-1)
                    cout<<" ";
            }
            cout<<")";
        }
        cout<<"\n";
    }
}	
// } Driver Code Ends