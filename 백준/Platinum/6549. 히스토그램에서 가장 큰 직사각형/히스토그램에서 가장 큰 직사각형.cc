#include<iostream>
#include<math.h>
using namespace std;

typedef long long ll;

ll max_area = 0;

ll minv(ll a, ll b, ll *arr) {
	if (a == -1) return b;
	if (b == -1) return a;
	return (arr[a] > arr[b]) ? b : a;
}

ll maxv(ll a, ll b) {
	return (a > b) ? a : b;
}

ll inittree(ll *arr, ll *tree, ll node, ll start, ll end) {
	if (start == end) {
		tree[node] = start;
	}
	else {
		ll mid = (start + end) / 2;
		tree[node] = minv(inittree(arr, tree, node * 2, start, mid), inittree(arr, tree, node * 2 + 1, mid + 1, end), arr);
	}
	return tree[node];
}

ll min_height(ll *tree, ll *arr, ll node, ll left, ll right, ll start, ll end) {
	if (right < start || end < left) {
		return -1;
	}
	if (left <= start && end <= right) {
		return tree[node];
	}
	ll mid = (start + end) / 2;
	return minv(
		min_height(tree, arr, node * 2, left, right, start, mid),
		min_height(tree, arr, node * 2 + 1, left, right, mid + 1, end),
		arr
	);
}

ll soultion(ll start, ll end, ll *tree, ll n, ll *arr) {
	ll mid = min_height(tree, arr, 1, start, end, 1, n);
	max_area = maxv(max_area, arr[mid] * (end - start + 1));
	if (start <= mid - 1) {
		max_area = maxv(max_area, soultion(start, mid - 1, tree, n, arr));
	}
	if (mid + 1 <= end) {
		max_area = maxv(max_area, soultion(mid + 1, end, tree, n, arr));
	}
	return max_area;
}

int main()
{
	cout.tie(NULL);
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int n, h, tree_size;
	while (true)
	{
		cin >> n;
		if (n == 0) break;
		ll *histogram = new ll[n + 1];
		for (size_t i = 1; i <= n; i++)
		{
			cin >> histogram[i];
		}
		h = ceil(log2(n));
		tree_size = (1 << (h + 1));
		ll *tree = new ll[tree_size + 1];
		inittree(histogram, tree, 1, 1, n);
		max_area = 0;
		cout << soultion(1, n, tree, n, histogram) << "\n";
		delete[] histogram, tree;
	}
	return 0;
}