//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
public:
	int isEulerCircuit(int V, vector<int> adj[]) {
        vector<int> degree(V, 0);

        for (int i = 0; i < V; ++i) {
            for (int e : adj[i]) {
                degree[e]++;
            }
        }

        int cnt = count_if(degree.begin(), degree.end(), [](int e) { return e % 2 != 0; });

        if (cnt == 0) {
            return 2;
        }

        if (cnt <= 2) {
            return 1;
        }

        return 0;
    }
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int V, E;
		cin >> V >> E;
		vector<int>adj[V];
		for(int i = 0; i < E; i++){
			int u, v;
			cin >> u >> v;
			adj[u].push_back(v);
			adj[v].push_back(u);
		}
		Solution obj;
		int ans = obj.isEulerCircuit(V, adj);
		cout << ans <<"\n";	}
	return 0;
}
// } Driver Code Ends