#include<iostream>
#include<math.h>
using namespace std;

typedef long long int ll;
ll *arr;
ll *lazy;
ll *tree;

void lazy_update(int start, int end, int node) {
	tree[node] += lazy[node] * (end - start + 1);
	if (start != end) {
		lazy[node * 2] += lazy[node];
		lazy[node * 2 + 1] += lazy[node];
	}
	lazy[node] = 0;
}

void update_tree(int start, int end, int node, ll diff, int left, int right) {
	int mid = (start + end) / 2;
	lazy_update(start, end, node);
	if (end < left || right < start) {
		return;
	}
	else if (left <= start && end <= right) {
		tree[node] += diff * (end - start + 1);
		if (start != end) {
			lazy[node * 2] += diff;
			lazy[node * 2 + 1] += diff;
		}
		return;
	}
	update_tree(start, mid, node * 2, diff, left, right);
	update_tree(mid + 1, end, node * 2 + 1, diff, left, right);
	tree[node] = tree[node * 2] + tree[node * 2 + 1];
}

ll print_tree(int start, int end, int node, int left, int right) {
	int mid = (start + end) / 2;
	lazy_update(start, end, node);
	if (end < left || right < start) {
		return 0;
	}
	else if (left <= start && end <= right) {
		return tree[node];
	}
	return print_tree(start, mid, node * 2, left, right) + print_tree(mid + 1, end, node * 2 + 1, left, right);
}

ll init_tree(int start, int end, int node) {
	if (start == end) {
		tree[node] = arr[start];
	}
	else {
		int mid = (start + end) / 2;
		tree[node] = init_tree(start, mid, node * 2) + init_tree(mid + 1, end, node * 2 + 1);
	}
	return tree[node];
}

int main()
{
	cin.tie(NULL); ios_base::sync_with_stdio(false);
	int n, m, k, query, a, b;
	ll diff;
	cin >> n >> m >> k;
	arr = new ll[n + 1];
	for (int i = 1; i <= n; i++)
	{
		cin >> arr[i];
	}
	int h = ceil(log2(n));
	int tree_size = 1 << (h + 1);
	lazy = new ll[tree_size + 1]{ 0 };
	tree = new ll[tree_size + 1]{ 0 };
	init_tree(1, n, 1);
	for (int i = 0; i < m+k; i++)
	{
		cin >> query;
		if (query == 1) {
			cin >> a >> b >> diff;
			update_tree(1, n, 1, diff, a, b);
		}
		else {
			cin >> a >> b;
			cout << print_tree(1, n, 1, a, b) << "\n";
		}
	}

	delete[] arr, lazy, tree;
	return 0;
}