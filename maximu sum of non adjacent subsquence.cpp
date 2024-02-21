#include <bits/stdc++.h> 
int maximumNonAdjacentSum(vector<int> &nums){
    // Write your code here.
    int prev1=nums[0];
    int prev2=0;
    int curr;
    for(int i=1;i<nums.size();i++){
        int pick = nums[i];
        if(i>1) pick+= prev2;
        int notpick = 0 + prev1;
        curr = max(pick, notpick);
        prev2=prev1;
        prev1=curr;
    }
    return prev1;
}