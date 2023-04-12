#include<iostream>
#include<math.h>
using namespace std;

typedef long long int ll;

ll max(ll a, ll b) {
	return (a > b) ? a : b;
}

ll min(ll a, ll b) {
	return (a > b) ? b : a;
}

ll find_tree(ll *tree, int node, int start, int end, int left, int right, bool minmax) {
	if (right < start || left > end) {
		if (minmax) {
			return 0;
		}
		return 1000000001;
	}
	else if (left <= start && end <= right) {
		return tree[node];
	}
	int mid = (start + end) / 2;
	if (minmax) {
		return max(find_tree(tree, node * 2, start, mid, left, right, minmax), find_tree(tree, node * 2 + 1, mid + 1, end, left, right, minmax));
	}
	return min(find_tree(tree, node * 2, start, mid, left, right, minmax), find_tree(tree, node * 2 + 1, mid + 1, end, left, right, minmax));
}

ll init_tree(ll *arr, ll *tree, int node, int start, int end, bool minmax) {
	if (start == end) {
		return tree[node] = arr[start];
	}
	int mid = (start + end) / 2;
	if (minmax) {
		tree[node] = max(init_tree(arr, tree, node * 2, start, mid, minmax), init_tree(arr, tree, node * 2 + 1, mid + 1, end, minmax));
	}
	else {
		tree[node] = min(init_tree(arr, tree, node * 2, start, mid, minmax), init_tree(arr, tree, node * 2 + 1, mid + 1, end, minmax));
	}
	return tree[node];
}

int main()
{
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);
	int n, m;
	cin >> n >> m;
	ll *arr = new ll[n + 1];
	ll h = ceil(log2(n));
	ll tree_size = 1 << (h + 1);
	ll *tree_min = new ll[tree_size + 1];
	ll *tree_max = new ll[tree_size + 1];
	for (size_t i = 1; i <= n; i++)
	{
		cin >> arr[i];
	}
	init_tree(arr, tree_min, 1, 1, n, false);
	init_tree(arr, tree_max, 1, 1, n, true);
	ll a, b;
	for (size_t i = 0; i < m; i++)
	{
		cin >> a >> b;
		cout << find_tree(tree_min, 1, 1, n, a, b, false) << " " << find_tree(tree_max, 1, 1, n, a, b, true) << "\n";;
	}

	delete[] arr, tree_min, tree_max;
	return 0;
}