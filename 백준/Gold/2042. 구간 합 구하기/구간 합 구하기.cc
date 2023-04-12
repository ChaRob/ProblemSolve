#include<iostream>
#include<math.h>
using namespace std;

typedef long long int ll;

ll sum_tree(ll *tree, int node, int start, int end, int left, int right) {
	if (right < start || left > end) {
		return 0;
	}
	else if (left <= start && end <= right) {
		return tree[node];
	}
	int mid = (start + end) / 2;
	return sum_tree(tree, node * 2, start, mid, left, right) + sum_tree(tree, node * 2 + 1, mid + 1, end, left, right);
}

void update_tree(ll *tree, int node, int start, int end, int index, ll diff) {
	if (start > index || index > end) {
		return;
	}
	tree[node] += diff;
	if (start != end) {
		int mid = (start + end) / 2;
		update_tree(tree, node * 2, start, mid, index, diff);
		update_tree(tree, node * 2 + 1, mid + 1, end, index, diff);
	}
}

ll init_tree(ll *arr, ll *tree, int node, int start, int end) {
	if (start == end) {
		return tree[node] = arr[start];
	}
	int mid = (start + end) / 2;
	return tree[node] = init_tree(arr, tree, node * 2, start, mid) + init_tree(arr, tree, node * 2 + 1, mid + 1, end);
}

int main()
{
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);
	int n, m, k;
	cin >> n >> m >> k;
	ll *arr = new ll[n + 1];
	ll h = ceil(log2(n));
	ll tree_size = 1 << (h + 1);
	ll *tree = new ll[tree_size + 1];
	for (size_t i = 1; i <= n; i++)
	{
		cin >> arr[i];
	}
	init_tree(arr, tree, 1, 1, n);
	ll a, b, c;
	for (size_t i = 0; i < m+k; i++)
	{
		cin >> a >> b >> c;
		if (a == 1) {
			ll diff = c - arr[b];
			arr[b] = c;
			update_tree(tree, 1, 1, n, b, diff);
		}
		else {
			cout << sum_tree(tree, 1, 1, n, b, c) << "\n";
		}
	}

	delete[] arr, tree;
	return 0;
}