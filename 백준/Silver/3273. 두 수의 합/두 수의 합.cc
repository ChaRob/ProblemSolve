#include<iostream>
using namespace std;

int A[100000] = { 0 };

void Merge(int* arr, int left, int mid, int right) {
	int low = left, high = mid + 1, idx = 0;
	int* new_arr = new int[right - left + 1];
	while (low <= mid && high <= right) {
		if (arr[low] < arr[high]) {
			new_arr[idx++] = arr[low++];
		}
		else {
			new_arr[idx++] = arr[high++];
		}
	}
	if (low > mid) {
		while (high <= right) {
			new_arr[idx++] = arr[high++];
		}
	}
	else {
		while (low <= mid) {
			new_arr[idx++] = arr[low++];
		}
	}

	for (int i = left; i <= right; i++) {
		arr[i] = new_arr[i - left];
	}
	delete[] new_arr;
}

void MergeSort(int* arr, int left, int right) {
	if (left < right) {
		int mid = (left + right) / 2;
		MergeSort(arr, left, mid);
		MergeSort(arr, mid + 1, right);
		Merge(arr, left, mid, right);
	}
}

int main() {
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);
	int n, x, cnt = 0;
	cin >> n;
	for (int t = 0; t < n; t++) {
		cin >> A[t];
	}
	cin >> x;
	MergeSort(A, 0, n - 1);
	int i = 0, j = n - 1;
	while (i < j) {
		if (A[i] + A[j] == x) {
			cnt++;
			i++;
			j--;
		}
		else if (A[i] + A[j] > x) {
			j--;
		}
		else {
			i++;
		}
	}
	cout << cnt;
    return 0;
}