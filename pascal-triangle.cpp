class Solution{
public:
    vector<long long> nthRowOfPascalTriangle(int n) {
      int MOD = 1e9 + 7;
        vector<long long> row(n, 1); 
        
        for (int i = 1; i < n; ++i) {
            for (int j = i - 1; j > 0; --j) {
                row[j] = (row[j] + row[j - 1]) % MOD; }
        }return row;
    }
    
};
