#include<iostream>
#include<vector>
using namespace std;

struct Node {
	int parent = -1;
	vector<int> child = {};
};

int dp[100001];
vector<vector<int>> connect;
Node nodes[100001];

void maketree(int currentnode, int parent) {
	for (int node : connect[currentnode]) {
		if (node != parent) {
			nodes[currentnode].child.push_back(node);
			nodes[node].parent = currentnode;
			maketree(node, currentnode);
		}
	}
}

void countSubtreeNodes(int currentnode){
	dp[currentnode] = 1;
	for (int node : nodes[currentnode].child) {
		countSubtreeNodes(node);
		dp[currentnode] += dp[node];
	}
}

int main()
{
	cin.tie(NULL); ios_base::sync_with_stdio(false);
	int n, r, q, u, v;
	cin >> n >> r >> q;
	for (size_t i = 0; i <= n; i++)
	{
		connect.push_back({});
	}
	for (size_t i = 0; i < n-1; i++)
	{
		cin >> u >> v;
		connect[u].push_back(v);
		connect[v].push_back(u);
	}
	maketree(r, -1);
	countSubtreeNodes(r);
	for (size_t i = 0; i < q; i++)
	{
		cin >> u;
		cout << dp[u] << "\n";
	}
	return 0;
}