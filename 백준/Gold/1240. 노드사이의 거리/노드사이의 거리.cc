#include<iostream>
#include<vector>
#include<queue>
using namespace std;

vector<vector<pair<int, int>>> graph;

int bfs(int n, int start, int end) {
	bool* visited = new bool[n + 1] {false};
	int* dist = new int[n + 1] {0};
	queue<int> que;
	que.push(start);
	visited[start] = true;

	while (!que.empty()) {
		int front = que.front();
		que.pop();

		if (front == end) {
			break;
		}

		for (int i = 0; i < graph[front].size(); i++)
		{
			int node = graph[front][i].first;
			if (!visited[node]) {
				visited[node] = true;
				dist[node] = dist[front] + graph[front][i].second;
				que.push(node);
			}
		}
	}
	delete[] visited, dist;
	return dist[end];
}

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);
	int n, m, i;
	cin >> n >> m;
	for (i = 0; i <= n; i++)
	{
		vector<pair<int, int>> tmp;
		graph.push_back(tmp);
	}

	int x, y, d;
	for (i = 0; i < n-1; i++)
	{
		cin >> x >> y >> d;
		graph[x].push_back(make_pair(y, d));
		graph[y].push_back(make_pair(x, d));
	}

	for (i = 0; i < m; i++)
	{
		cin >> x >> y;
		cout << bfs(n, x, y) << "\n";
	}
	
	return 0;
}