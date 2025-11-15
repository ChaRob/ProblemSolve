#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int parent[20][100001];
int depth[100001];
bool visited[100001];

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int n, m;
	cin >> n;
	vector<vector<int>> adj(n + 1);
	for (int i = 0; i < n-1; i++)
	{
		int a, b;
		cin >> a >> b;
		adj[a].push_back(b);
		adj[b].push_back(a);
	}
	queue<int> que;
	que.push(1);
	visited[1] = true;
	depth[1] = 0;
	while (!que.empty())
	{
		int cur = que.front();
		que.pop();
		for (int next : adj[cur])
		{
			if (!visited[next])
			{
				visited[next] = true;
				parent[0][next] = cur;
				depth[next] = depth[cur] + 1;
				que.push(next);
			}
		}
	}
	for (int k = 0; k < 19; k++)
	{
		for (int v = 1; v <= n; v++)
		{
			parent[k + 1][v] = parent[k][parent[k][v]];
		}
	}
	cin >> m;
	for (int i = 0; i < m; i++)
	{
		int a, b;
		cin >> a >> b;
		if (depth[a] < depth[b]) swap(a, b);
		int depthDiff = depth[a] - depth[b];
		for (int j = 19; j >= 0; j--)
		{
			if (depthDiff & (1 << j))
			{
				a = parent[j][a];
			}
		}

		if (a == b)
		{
			cout << a << "\n";
			continue;
		}

		for (int j = 19; j >= 0; j--)
		{
			if (parent[j][a] != parent[j][b])
			{
				a = parent[j][a];
				b = parent[j][b];
			}
		}

		cout << parent[0][a] << "\n";
	}
	return 0;
}