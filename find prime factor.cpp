#include <bits/stdc++.h>
using namespace std;
vector<int> countPrimes(int n)
{
    // Write your code here.
    vector<bool> prime(n + 1, true);
		prime[0] = false;
		prime[1] = false;
		for (int i = 2; i * i <= n; i++) {
			if (prime[i]) {
				for (int j = i * i; j <= n; j += i) {
					prime[j] = false;
				}
			}
		}
		//counting prime numbers
		vector<int> ans;
		for (int i = 2; i < n; i++) {
			if (prime[i] && n%i==0) {
				ans.push_back(i);
			}
		}
		return ans;
	
}