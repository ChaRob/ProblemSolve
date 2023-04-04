#include<iostream>
#include<queue>
using namespace std;

int dist_a[1001] = { 0 }, dist_b[1001] = { 0 };

void Dijstra(vector<vector<vector<int>>> graph, int start, int *dist) {
	for (size_t i = 0; i <= 1000; i++)
	{
		dist[i] = 1000000000;
	}
	dist[start] = 0;
	priority_queue <vector<int>, vector<vector<int>>, greater<vector<int>>> que;
	que.push({ 0,start });
	while (!que.empty()) {
		vector<int> info = que.top();
		que.pop();
		if (dist[info[1]] < info[0]) {
			continue;
		}
		for (size_t i = 0; i < graph[info[1]].size(); i++)
		{
			int v = graph[info[1]][i][0], d = graph[info[1]][i][1];
			if (dist[v] > dist[info[1]] + d) {
				dist[v] = dist[info[1]] + d;
				que.push({ dist[v],v });
			}
		}
	}
}

int main()
{
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);
	int T, N, M, X, x, y, c, res;
	cin >> T;
	for (size_t test = 1; test <= T; test++)
	{
		cin >> N >> M >> X;
		vector<vector<vector<int>>> graph_a, graph_b;
		for (size_t i = 0; i <= N; i++)
		{
			graph_a.push_back({});
			graph_b.push_back({});
		}
		for (size_t i = 0; i < M; i++)
		{
			cin >> x >> y >> c;
			graph_a[x].push_back({ y,c });
			graph_b[y].push_back({ x,c });
		}
		res = 0;
		Dijstra(graph_a, X, dist_a);
		Dijstra(graph_b, X, dist_b);
		for (size_t i = 1; i <= N; i++)
		{
			if (i != X) {
				int tmp = dist_a[i] + dist_b[i];
				if (tmp > res) {
					res = tmp;
				}
			}
		}
		cout << "#" << test << " " << res << "\n";
	}
	return 0;
}