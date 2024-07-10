#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

int visited[100001];

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int n, m, r, visit = 1;
	cin >> n >> m >> r;
	queue<int> que;
	que.push(r);
	visited[r] = visit++;
	vector<vector<int>> graph;
	for (int i = 0; i <= n; i++)
	{
		vector<int> tmp;
		graph.push_back(tmp);
	}
	for (int i = 0; i < m; i++)
	{
		int u, v;
		cin >> u >> v;
		graph[u].push_back(v);
		graph[v].push_back(u);
	}
	for (int i = 1; i <= n; i++)
	{
		sort(graph[i].begin(), graph[i].end());
	}
	while (!que.empty())
	{
		int v = que.front();
		que.pop();
		for (int& i : graph[v])
		{
			if (visited[i] == 0) {
				visited[i] = visit++;
				que.push(i);
			}
		}
	}
	for (int i = 1; i <= n; i++)
	{
		cout << visited[i] << "\n";
	}
	return 0;
}