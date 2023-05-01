#include<iostream>
#include<math.h>
using namespace std;

struct num {
	int idx = 1000000;
	int value = 1000000001;
};

num minv(num a, num b) {
	if (a.value == b.value) {
		return (a.idx < b.idx) ? a : b;
	}
	return (a.value < b.value) ? a : b;
}

void update_tree(num *tree, int start, int end, int node, int idx, int v) {
	if (start == end && start == idx) {
		tree[node].value = v;
		return;
	}
	if (idx < start || end < idx) {
		return;
	}
	int mid = (start + end) / 2;
	update_tree(tree, start, mid, node * 2, idx, v);
	update_tree(tree, mid + 1, end, node * 2 + 1, idx, v);
	tree[node] = minv(tree[node * 2], tree[node * 2 + 1]);
}

num print_tree(num *tree, int start, int end, int node, int left, int right) {
	if (end < left || right < start) {
		num tmp;
		return tmp;
	}
	if (left <= start && end <= right) {
		return tree[node];
	}
	int mid = (start + end) / 2;
	return minv(print_tree(tree, start, mid, node * 2, left, right), print_tree(tree, mid + 1, end, node * 2 + 1, left, right));
}

void init_tree(num *tree, int *arr, int start, int end, int node) {
	if (start == end) {
		tree[node].idx = start;
		tree[node].value = arr[start];
		return;
	}
	int mid = (start + end) / 2;
	init_tree(tree, arr, start, mid, node * 2);
	init_tree(tree, arr, mid + 1, end, node * 2 + 1);
	tree[node] = minv(tree[node * 2], tree[node * 2 + 1]);
}

int main()
{
	cin.tie(NULL); ios_base::sync_with_stdio(false);
	int n, m, query, x, y;
	cin >> n;
	int h = ceil(log2(n));
	int tree_size = 1 << (h + 1);
	int *arr = new int[n + 1];
	num *tree = new num[tree_size + 1];
	for (int i = 1; i <= n; i++)
	{
		cin >> arr[i];
	}
	init_tree(tree, arr, 1, n, 1);
	cin >> m;
	for (int i = 0; i < m; i++)
	{
		cin >> query >> x >> y;
		if (query == 1) {
			update_tree(tree, 1, n, 1, x, y);
		}
		else {
			cout << print_tree(tree, 1, n, 1, x, y).idx << "\n";
		}
	}

	delete[] arr, tree;
	return 0;
}