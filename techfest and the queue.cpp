//{ Driver Code Starts

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution {
public:
    int sumOfPowers(int a, int b){
        vector<int> spf(b + 1, 0); // spf stands for smallest prime factor
        for (int i = 2; i <= b; i++) {
            if (spf[i] == 0) {
                for (int j = i; j <= b; j += i) {
                    if (spf[j] == 0) {
                        spf[j] = i;
                    }
                }
            }
        }
    
        int result = 0;
        for (int i = a; i <= b; i++) {
            int num = i;
            unordered_map<int, int> primeFactors;
            while (num > 1) {
                primeFactors[spf[num]]++;
                num /= spf[num];
            }
    
            for (auto factor : primeFactors) {
                result += factor.second;
            }
        }
    
        return result;
    }
	
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int a, b;
		cin >>  a >> b;
		Solution obj;
		int ans = obj.sumOfPowers(a, b);
		cout << ans <<"\n";
	}
	return 0;
}
// } Driver Code Ends