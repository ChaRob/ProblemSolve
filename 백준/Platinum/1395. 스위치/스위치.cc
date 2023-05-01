#include<iostream>
#include<math.h>
using namespace std;

void lazy_update(int *tree, int *lazy, int start, int end, int node) {
	if (lazy[node] == 1) {
		tree[node] = end - start + 1 - tree[node];
		if (start != end) {
			lazy[node * 2] = !lazy[node * 2];
			lazy[node * 2 + 1] = !lazy[node * 2 + 1];
		}
	}
	lazy[node] = 0;
}

void update_tree(int *tree, int *lazy, int start, int end, int node, int left, int right) {
	lazy_update(tree, lazy, start, end, node);
	int mid = (start + end) / 2;
	if (end < left || right < start) {
		return;
	}
	if (left <= start && end <= right) {
		tree[node] = end - start + 1 - tree[node];
		if (start != end) {
			lazy[node * 2] = !lazy[node * 2];
			lazy[node * 2 + 1] = !lazy[node * 2 + 1];
		}
		return;
	}
	update_tree(tree, lazy, start, mid, node * 2, left, right);
	update_tree(tree, lazy, mid + 1, end, node * 2 + 1, left, right);
	tree[node] = tree[node * 2] + tree[node * 2 + 1];
}

int print_tree(int *tree, int *lazy, int start, int end, int node, int left, int right) {
	lazy_update(tree, lazy, start, end, node);
	if (end < left || right < start) {
		return 0;
	}
	if (left <= start && end <= right) {
		return tree[node];
	}
	int mid = (start + end) / 2;
	return print_tree(tree, lazy, start, mid, node * 2, left, right) + print_tree(tree, lazy, mid + 1, end, node * 2 + 1, left, right);
}

int main()
{
	cin.tie(NULL); ios_base::sync_with_stdio(false);
	int n, m, o, s, t;
	cin >> n >> m;
	int h = ceil(log2(n));
	int tree_size = 1 << (h + 1);
	int *tree = new int[tree_size + 1]{ 0 };
	int *lazy = new int[tree_size + 1]{ 0 };
	for (int i = 0; i < m; i++)
	{
		cin >> o >> s >> t;
		if (o == 0) {
			update_tree(tree, lazy, 1, n, 1, s, t);
		}
		else {
			cout << print_tree(tree, lazy, 1, n, 1, s, t) << "\n";
		}
	}

	delete[] tree, lazy;
	return 0;
}