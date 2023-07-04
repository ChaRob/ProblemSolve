#include<iostream>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int n, m, i, j, k;
	cin >> n >> m;

	int* A = new int[n];
	int* B = new int[m];

	for (i = 0; i < n; i++)
	{
		cin >> A[i];
	}
	for (i = 0; i < m; i++)
	{
		cin >> B[i];
	}
	i = 0;
	j = 0;
	k = 0;

	while (k < n + m) {
		if (A[i] < B[j]) {
			if (i < n) {
				cout << A[i++] << " ";
			}
			else {
				cout << B[j++] << " ";
			}
		}
		else {
			if (j < m) {
				cout << B[j++] << " ";
			}
			else {
				cout << A[i++] << " ";
			}
		}
		k++;
	}

	delete[] A, B;
	return 0;
}