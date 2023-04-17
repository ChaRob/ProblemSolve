#include<iostream>
#include<math.h>
using namespace std;

int max_area = 0;

int minv(int a, int b, int *arr) {
	if (a == -1) return b;
	if (b == -1) return a;
	return (arr[a] > arr[b]) ? b : a;
}

int maxv(int a, int b) {
	return (a > b) ? a : b;
}

int inittree(int *arr, int *tree, int node, int start, int end) {
	if (start == end) {
		tree[node] = start;
	}
	else {
		int mid = (start + end) / 2;
		tree[node] = minv(inittree(arr, tree, node * 2, start, mid), inittree(arr, tree, node * 2 + 1, mid + 1, end), arr);
	}
	return tree[node];
}

int min_height(int *tree, int *arr, int node, int left, int right, int start, int end) {
	if (right < start || end < left) {
		return -1;
	}
	if (left <= start && end <= right) {
		return tree[node];
	}
	int mid = (start + end) / 2;
	return minv(
		min_height(tree, arr, node * 2, left, right, start, mid),
		min_height(tree, arr, node * 2 + 1, left, right, mid + 1, end),
		arr
	);
}

int soultion(int start, int end, int *tree, int n, int *arr) {
	int mid = min_height(tree, arr, 1, start, end, 1, n);
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
	cin >> n;
	int *histogram = new int[n + 1];
	for (size_t i = 1; i <= n; i++)
	{
		cin >> histogram[i];
	}
	h = ceil(log2(n));
	tree_size = (1 << (h + 1));
	int *tree = new int[tree_size + 1];
	inittree(histogram, tree, 1, 1, n);
	
	cout << soultion(1, n, tree, n, histogram);
	delete[] histogram, tree;
	return 0;
}