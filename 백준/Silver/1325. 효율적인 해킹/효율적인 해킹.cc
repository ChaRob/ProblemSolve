#include<iostream>
#include<queue>
#include<vector>
using namespace std;

int computernum[10001] = { 0 };
vector<vector<int>> graph;

int bfs(int n) {
	queue<int> que;
	bool visited[10001] = { false };
	que.push(n);
	visited[n] = true;
	int cnt = 1;
	while (!que.empty())
	{
		int node = que.front();
		que.pop();
		for (size_t i = 0; i < graph[node].size(); i++)
		{
			if (!visited[graph[node][i]])
			{
				visited[graph[node][i]] = true;
				que.push(graph[node][i]);
				cnt++;
			}
		}
	}
	return cnt;
}

int main()
{
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);
	int n, m, a, b, maxcnt = 0;
	cin >> n >> m;
	for (size_t i = 0; i <= n; i++)
	{
		vector<int> tmp = {};
		graph.push_back(tmp);
	}
	for (size_t i = 0; i < m; i++)
	{
		cin >> a >> b;
		graph[b].push_back(a);
	}
	for (size_t i = 1; i <= n; i++)
	{
		computernum[i] = bfs(i);
		maxcnt = (maxcnt > computernum[i]) ? maxcnt : computernum[i];
	}
	for (size_t i = 1; i <= n; i++)
	{
		if (maxcnt == computernum[i]) {
			cout << i << " ";
		}
	}
	return 0;
}