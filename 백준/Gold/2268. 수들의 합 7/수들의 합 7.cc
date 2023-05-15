#include<iostream>
#include<math.h>
using namespace std;

typedef long long ll;

void update(ll *tree, ll node, int start, int end, int target, ll diff) {
	if (target < start || end < target) {
		return;
	}
	tree[node] += diff;
	if (start == end) {
		return;
	}
	int mid = (start + end) / 2;
	update(tree, node * 2, start, mid, target, diff);
	update(tree, node * 2 + 1, mid + 1, end, target, diff);
}

ll Sum(ll *tree, ll node, int start, int end, int left, int right) {
	if (right < start || end < left) {
		return 0;
	}
	if (left <= start && end <= right) {
		return tree[node];
	}
	int mid = (start + end) / 2;
	return Sum(tree, node * 2, start, mid, left, right) + Sum(tree, node * 2 + 1, mid + 1, end, left, right);
}

int main()
{
	cin.tie(NULL); ios_base::sync_with_stdio(false);
	ll n, m, query, i, j, diff;
	cin >> n >> m;
	ll h = ceil(log2(n));
	ll tree_size = 1 << (h + 1);
	ll *tree = new ll[tree_size + 1]{ 0 };
	ll *arr = new ll[n + 1]{ 0 };

	for (int a = 0; a < m; a++)
	{
		cin >> query >> i >> j;
		if (query == 0) {
			if (i > j) {
				cout << Sum(tree, 1, 1, n, j, i) << "\n";
			}
			else {
				cout << Sum(tree, 1, 1, n, i, j) << "\n";
			}
		}
		else {
			diff = j - arr[i];
			arr[i] = j;
			update(tree, 1, 1, n, i, diff);
		}
	}

	delete[] tree, arr;
	return 0;
}