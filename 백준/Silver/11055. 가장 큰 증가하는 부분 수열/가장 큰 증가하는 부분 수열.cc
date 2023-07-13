#include<iostream>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int n, max_value = 0, tmp;
	cin >> n;
	int* A = new int[n];
	int* sum = new int[n];
	for (int i = 0; i < n; i++)
	{
		cin >> A[i];
		int j = i;
		sum[i] = A[i];
		while (j >= 0) {
			if (A[i] > A[j]) {	
				sum[i] = (A[i] + sum[j] > sum[i]) ? A[i] + sum[j] : sum[i];
			}
			j--;
		}
		max_value = (max_value > sum[i]) ? max_value : sum[i];
	}
	cout << max_value;
	delete[] A, sum;
	return 0;
}