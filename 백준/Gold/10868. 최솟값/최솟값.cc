#include<iostream>
#include<math.h>
using namespace std;

typedef long long int ll;

ll min(ll a, ll b) {
	return (a > b) ? b : a;
}

ll find_tree(ll *tree, int node, int start, int end, int left, int right) {
	if (right < start || left > end) {
		return 1000000001;
	}
	else if (left <= start && end <= right) {
		return tree[node];
	}
	int mid = (start + end) / 2;
	return min(find_tree(tree, node * 2, start, mid, left, right), find_tree(tree, node * 2 + 1, mid + 1, end, left, right));
}

ll init_tree(ll *arr, ll *tree, int node, int start, int end) {
	if (start == end) {
		return tree[node] = arr[start];
	}
	int mid = (start + end) / 2;
	
	tree[node] = min(init_tree(arr, tree, node * 2, start, mid), init_tree(arr, tree, node * 2 + 1, mid + 1, end));
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
	for (size_t i = 1; i <= n; i++)
	{
		cin >> arr[i];
	}
	init_tree(arr, tree_min, 1, 1, n);
	ll a, b;
	for (size_t i = 0; i < m; i++)
	{
		cin >> a >> b;
		cout << find_tree(tree_min, 1, 1, n, a, b) << "\n";;
	}

	delete[] arr, tree_min;
	return 0;
}