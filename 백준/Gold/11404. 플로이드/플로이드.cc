#include<iostream>
using namespace std;

unsigned int graph[101][101];

unsigned int min(unsigned int a, unsigned int b) {
	if (a > b) {
		return b;
	}
	else {
		return a;
	}
}

int main()
{
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);
	int n, m, x, y, c;
	cin >> n >> m;
	for (size_t i = 0; i <= n; i++)
	{
		for (size_t j = 0; j <= n; j++)
		{
			if (i == j) {
				graph[i][j] = 0;
			}
			else {
				graph[i][j] = 1000000000;
			}
		}
	}
	for (size_t i = 0; i < m; i++)
	{
		cin >> x >> y >> c;
		if (graph[x][y] > c) {
			graph[x][y] = c;
		}
	}
	for (size_t k = 1; k <= n; k++)
	{
		for (size_t i = 1; i <= n; i++)
		{
			for (size_t j = 1; j <= n; j++)
			{
				graph[i][j] = min(graph[i][j], graph[i][k] + graph[k][j]);
			}
		}
	}
	for (size_t i = 1; i <= n; i++)
	{
		for (size_t j = 1; j <= n; j++)
		{
			if (graph[i][j] >= 1000000000) {
				graph[i][j] = 0;
			}
			cout << graph[i][j] << " ";
		}
		cout << "\n";
	}
	return 0;
}