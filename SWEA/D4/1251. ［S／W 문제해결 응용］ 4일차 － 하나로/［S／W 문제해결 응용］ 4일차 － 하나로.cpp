#include<iostream>
#include<queue>
#include<math.h>
using namespace std;

struct Edge
{
	long long dist;
	int start, end;
	Edge(long long d, int n1, int n2) {
		dist = d;
		start = n1;
		end = n2;
	}
	~Edge() {}
};

struct cmp
{
	bool operator()(Edge a, Edge b) {
		return a.dist > b.dist;
	}
};

int find_root(int x, int *parent) {
	if (parent[x] == x) {
		return x;
	}
	parent[x] = find_root(parent[x], parent);
	return parent[x];
}

void union_root(int a, int b, int *parent, int *rank) {
	int x = find_root(a, parent);
	int y = find_root(b, parent);
	if (x == y) {
		return;
	}
	if (rank[x] < rank[y]) {
		parent[x] = y;
	}
	else {
		parent[y] = x;
		if (rank[x] == rank[y]) {
			rank[x]++;
		}
	}
}

int main()
{
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);
	int T, n, island_x[1000], island_y[1000], parent[1000], cnt;
	long double E, res;
	cin >> T;
	for (size_t test = 1; test <= T; test++)
	{
		cin >> n;
		int rank[1000] = { 0 };
		res = 0; cnt = 0;
		for (size_t i = 0; i < n; i++)
		{
			cin >> island_x[i];
			parent[i] = i;
		}
		for (size_t i = 0; i < n; i++)
		{
			cin >> island_y[i];
		}
		cin >> E;
		priority_queue<Edge, vector<Edge>, cmp> que;
		for (size_t i = 0; i < n - 1; i++)
		{
			for (size_t j = i + 1; j < n; j++)
			{
				long long dist = pow((island_x[i] - island_x[j]), 2) + pow((island_y[i] - island_y[j]), 2);
				que.push(Edge(dist, i, j));
			}
		}
		while (!que.empty())
		{
			Edge edge = que.top();
			que.pop();
			if (find_root(edge.start, parent) == find_root(edge.end, parent)) {
				continue;
			}
			res += edge.dist;
			union_root(edge.start, edge.end, parent, rank);
			cnt++;
			if (cnt == n - 1) {
				break;
			}
		}
		E *= res;
		cout.fixed;
		cout.precision(12);
		cout << "#" << test << " " << round(E) << "\n";
	}
	return 0;
}