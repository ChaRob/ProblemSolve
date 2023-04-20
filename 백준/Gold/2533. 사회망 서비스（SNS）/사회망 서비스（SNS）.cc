#include<iostream>
#include<vector>
using namespace std;

struct Node {
	int parent = -1;
	vector<int> child = {};
};

vector<vector<int>> friends;
Node nodes[1000001];
int dp[1000001][2];
bool visited[1000001];

int minv(int a, int b) {
	return (a < b) ? a : b;
}

void maketree(int currentnode, int parent) {
	for (int node : friends[currentnode]) {
		if (node != parent) {
			nodes[currentnode].child.push_back(node);
			nodes[node].parent = currentnode;
			maketree(node, currentnode);
		}
	}
}

void dfs(int currentNode) {
	dp[currentNode][0] = 0;
	dp[currentNode][1] = 1;
	for (int node : friends[currentNode]) {
		if (!visited[node]) {
			visited[node] = true;
			dfs(node);
			dp[currentNode][0] += dp[node][1];
			dp[currentNode][1] += minv(dp[node][0], dp[node][1]);
		}
	}
}

int main()
{
	cin.tie(NULL); ios_base::sync_with_stdio(false);
	int n, u, v;
	cin >> n;
	for (size_t i = 0; i <= n; i++)
	{
		friends.push_back({});
	}
	for (size_t i = 0; i < n-1; i++)
	{
		cin >> u >> v;
		friends[u].push_back(v);
		friends[v].push_back(u);
	}
	maketree(1, 0);
	visited[1] = true;
	dfs(1);
	cout << minv(dp[1][0], dp[1][1]);
	return 0;
}