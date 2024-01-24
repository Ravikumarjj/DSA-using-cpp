#include <bits/stdc++.h>
using namespace std;
vector<int> twoOddNum(vector<int> arr){
    // Write your code here.
    int xorval =0;
    for(int x:arr){
        xorval^=x;
    }
    //find the fist rightmost set bit so that we can find the bit where the two element where differnt
    int setBit =0;
    for(int i=0;i<32;i++){
        int curr = 1<<i;
        if((xorval&curr) != 0){
            setBit = curr;
            break;
        }
    }
    //filtering the set and unset bit element and xoring to get the distinct element
    int first =0, second=0;
    for(auto x : arr){
        if((x & setBit)!=0){
            first^=x;
        }
        else{
            second^=x;
        }
    }
    if(first<second) return {second,first};
    else return {first, second};
}