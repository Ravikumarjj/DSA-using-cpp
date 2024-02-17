#include <bits/stdc++.h> 
int frogJump(int n, vector<int> &heights)
{
    // Write your code here.
    //tabulation with space optimization as there is i-1 and i-2 only so we can
    int prev1=0;
    int prev2=0;
    int curri;
    for(int i =1;i<n;i++){
        int onestep=prev1+abs(heights[i]-heights[i-1]);
        int twostep=INT_MAX;
        if(i>1) twostep=prev2+abs(heights[i]-heights[i-2]);
        int curri=min(onestep,twostep);
        prev2=prev1;
        prev1=curri;
    }
    return prev1;
}