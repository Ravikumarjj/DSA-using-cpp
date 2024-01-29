#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> subarraysWithSumK(vector<int> arr, long long k) {
    // Write your code here
     int start = 0, end = 0;
    long long sum = 0 ;
    vector<vector<int>> ans;
    vector<int> temp;
    while(end < arr.size())
    {
        sum += arr[end];
        while(sum > k) 
        {
            sum -= arr[start];
            start++;
        }
        if(sum == k)
        {
            for(int i = start ; i <= end ; i++)
            {
                temp.push_back(arr[i]);
            }
            ans.push_back(temp);
            temp.clear();
        }
        
        end++;
    }
    return ans;
}