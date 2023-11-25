#include<iostream>
#include<vector>
using namespace std;

vector<vector<int>> graph;
bool solve = true;

void dfs(const int& v, const int& nowV, bool* visited, char* check) {
	visited[nowV] = true;
	for (int i = 0; i < graph[nowV].size(); i++)
	{
		int node = graph[nowV][i];
		if (!visited[node]) {
			check[node] = (check[nowV] + 1) % 2;
			dfs(v, node, visited, check);
		}
		else if (check[node] == check[nowV]) {
			solve = false;
			return;
		}
	}
}

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);
	int k;
	cin >> k;
	for (int t = 0; t < k; t++)
	{
		int v, e, left, right;
		solve = true;
		graph.clear();
		cin >> v >> e;
		for (int i = 0; i <= v; i++)
		{
			graph.push_back(vector<int> {});
		}
		for (int i = 0; i < e; i++)
		{
			cin >> left >> right;
			graph[left].push_back(right);
			graph[right].push_back(left);
		}

		bool* visited = new bool[v + 1] {};
		char* check = new char[v + 1] {};
		
		for (int i = 1; i <= v; i++)
		{
			if (!visited[i] && solve) {
				dfs(v, i, visited, check);
			}
		}

		if (solve) {
			cout << "YES\n";
		}
		else {
			cout << "NO\n";
		}
	}
	return 0;
}