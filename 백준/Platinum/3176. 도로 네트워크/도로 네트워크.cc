#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int depth[100001] = {}, minLength[20][100001], maxLength[20][100001] = {}, parent[20][100001] = {};

struct Info
{
	int node;
	int length;
};

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int n;
	cin >> n;
	vector<vector<Info>> tree(n + 1);
	for (int i = 0; i < n - 1; i++)
	{
		int a, b, len;
		cin >> a >> b >> len;
		tree[a].push_back({ b, len });
		tree[b].push_back({ a, len });
	}
	queue<int> que;
	bool visited[100001] = {};
	que.push(1);
	visited[1] = true; depth[1] = 0; parent[0][1] = 0;
	fill(&minLength[0][0], &minLength[0][0] + sizeof(minLength) / sizeof(int), 1e9);
	while (!que.empty())
	{
		int cur = que.front();
		que.pop();
		for (int i = 0; i < tree[cur].size(); i++)
		{
			Info next = tree[cur][i];
			if (!visited[next.node])
			{
				visited[next.node] = true;
				depth[next.node] = depth[cur] + 1;
				parent[0][next.node] = cur;
				minLength[0][next.node] = next.length;
				maxLength[0][next.node] = next.length;
				que.push(next.node);
			}
		}
	}
	for (int k = 0; k < 19; k++)
	{
		for (int v = 1; v <= n; v++)
		{
			parent[k + 1][v] = parent[k][parent[k][v]];
			minLength[k + 1][v] = min(minLength[k][v], minLength[k][parent[k][v]]);
			maxLength[k + 1][v] = max(maxLength[k][v], maxLength[k][parent[k][v]]);
		}
	}
	int k;
	cin >> k;
	for (int i = 0; i < k; i++)
	{
		int d, e;
		cin >> d >> e;

		int ansMin = 1e9, ansMax = 0;
		if (depth[d] < depth[e]) swap(d, e);
		int depthDiff = depth[d] - depth[e];
		for (int j = 19; j >= 0; j--)
		{
			if (depthDiff & (1 << j))
			{
				ansMin = min(ansMin, minLength[j][d]);
				ansMax = max(ansMax, maxLength[j][d]);
				d = parent[j][d];
			}
		}

		if (d == e)
		{
			cout << ansMin << " " << ansMax << "\n";
			continue;
		}
		for (int k = 19; k >= 0; k--)
		{
			if (parent[k][d] != 0 && parent[k][d] != parent[k][e])
			{
				ansMin = min(ansMin, min(minLength[k][d], minLength[k][e]));
				ansMax = max(ansMax, max(maxLength[k][d], maxLength[k][e]));
				d = parent[k][d];
				e = parent[k][e];
			}
		}

		ansMin = min(ansMin, min(minLength[0][d], minLength[0][e]));
		ansMax = max(ansMax, max(maxLength[0][d], maxLength[0][e]));
		cout << ansMin << " " << ansMax << "\n";
	}
	return 0;
}