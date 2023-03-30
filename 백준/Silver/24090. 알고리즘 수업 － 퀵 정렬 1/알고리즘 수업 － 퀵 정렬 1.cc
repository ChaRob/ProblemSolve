#include<iostream>
using namespace std;

int A[10000] = { 0 };
int cnt = 0;
int res[2] = { 0 };

int partition(int *arr, int begin, int end, int k) {
	int x = arr[end];
	int i = begin - 1;
	int tmp;
	for (int j = begin; j < end; j++) {
		if (arr[j] <= x) {
			i++;
			tmp = arr[i];
			arr[i] = arr[j];
			arr[j] = tmp;
			cnt++;
			if (cnt == k) {
				res[0] = arr[i];
				res[1] = arr[j];
			}
		}
	}
	if (i + 1 != end) {
		tmp = arr[i + 1];
		arr[i + 1] = arr[end];
		arr[end] = tmp;
		cnt++;
		if (cnt == k) {
			res[0] = arr[i + 1];
			res[1] = arr[end];
		}
	}
	return i + 1;
}

void QuickSort(int *arr, int begin, int end, int k) {
	if (begin < end) {
		int p = partition(arr, begin, end, k);
		QuickSort(arr, begin, p - 1, k);
		QuickSort(arr, p + 1, end, k);
	}
}

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);
	int n, k;
	cin >> n >> k;
	for (int i = 0; i < n; i++) {
		cin >> A[i];
	}
	QuickSort(A, 0, n - 1, k);
	if (cnt < k) {
		cout << -1;
	}
	else {
		cout << res[0] << " " << res[1];
	}
	return 0;
}