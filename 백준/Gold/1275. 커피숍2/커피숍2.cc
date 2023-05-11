#include<iostream>
#include<math.h>
using namespace std;

typedef long long ll;

void update_tree(ll *tree, int node, int start, int end, ll diff, int target) {
	if (target > end || target < start) {
		return;
	}
	tree[node] += diff;
	if (start != end) {
		int mid = (start + end) / 2;
		update_tree(tree, node * 2, start, mid, diff, target);
		update_tree(tree, node * 2 + 1, mid + 1, end, diff, target);
	}
}

ll sum_tree(ll *tree, int node, int start, int end, int left, int right) {
	if (left > end || right < start) {
		return 0;
	}
	if (left <= start && end <= right) {
		return tree[node];
	}
	int mid = (start + end) / 2;
	return 
		sum_tree(tree, node * 2, start, mid, left, right) + 
		sum_tree(tree, node * 2 + 1, mid + 1, end, left, right);
}

ll init_tree(ll *tree, ll *arr, int node, int start, int end) {
	if (start == end) {
		return tree[node] = arr[start];
	}
	int mid = (start + end) / 2;
	tree[node] = 
		init_tree(tree, arr, node * 2, start, mid) + 
		init_tree(tree, arr, node * 2 + 1, mid + 1, end);
	return tree[node];
}

int main()
{
	cin.tie(NULL); ios_base::sync_with_stdio(false);
	int n, q, i, x, y, a;
	ll b;
	cin >> n >> q;
	ll *arr = new ll[n + 1];
	for (i = 1; i <= n; i++)
	{
		cin >> arr[i];
	}
	int h = ceil(log2(n));
	int tree_size = 1 << (h + 1);
	ll *tree = new ll[tree_size + 1];

	init_tree(tree, arr, 1, 1, n);

	for (i = 0; i < q; i++)
	{
		cin >> x >> y >> a >> b;
		if (x < y) {
			cout << sum_tree(tree, 1, 1, n, x, y) << "\n";
		}
		else {
			cout << sum_tree(tree, 1, 1, n, y, x) << "\n";
		}
		update_tree(tree, 1, 1, n, b - arr[a], a);
		arr[a] = b;
	}

	delete[] arr, tree;
	return 0;
}