#include<iostream>
using namespace std;

int main()
{
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);
	int T;
	cin >> T;
	for (size_t t = 0; t < T; t++)
	{
		int n, a, b, node1, node2;
		cin >> n;
		/*int *tree = new int[n + 1];
		for (size_t i = 0; i <= n; i++)
		{
			tree[i] = 0;
		}*/
		int tree[10001] = { 0 };
		for (size_t i = 0; i < n - 1; i++)
		{
			cin >> a >> b;
			tree[b] = a;
		}
		cin >> node1 >> node2;
		int ptr = 1, stack[10000] = { node1 };
		while (tree[node1])
		{
			stack[ptr++] = tree[node1];
			node1 = tree[node1];
		}
		while (node2)
		{
			int now_node = node2;
			for (size_t i = 0; i < ptr; i++)
			{
				if (node2 == stack[i]) {
					cout << node2 << "\n";
					tree[node2] = 0;
					break;
				}
			}
			node2 = tree[node2];
		}
	}
	return 0;
}