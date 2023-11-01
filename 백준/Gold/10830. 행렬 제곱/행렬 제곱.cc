#include<iostream>
using namespace std;

int** matrixTimes(int ** x, int** y, int n) {
	int i, j, k;
	int** result = new int* [n];
	for (i = 0; i < n; i++)
	{
		result[i] = new int[n];
	}

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			result[i][j] = 0;
			for (k = 0; k < n; k++)
			{
				result[i][j] += x[i][k] * y[k][j];
			}
			result[i][j] %= 1000;
		}
	}
	return result;
}

int** divide(int ** A, long long B, int n) {
	int** C;
	if (B == 1) {
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
			{
				A[i][j] %= 1000;
			}
		}
		return A;
	}

	C = divide(A, B / 2, n);
	if (B % 2 == 0) {
		return matrixTimes(C, C, n);
	}

	return matrixTimes(matrixTimes(C, C, n), A, n);
}

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);
	int n, i, j;
	long long B;
	cin >> n >> B;
	int** A = new int* [n];
	for (i = 0; i < n; i++)
	{
		A[i] = new int[n];
	}

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			cin >> A[i][j];
		}
	}

	A = divide(A, B, n);

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			cout << A[i][j] << " ";
		}
		cout << "\n";
	}

	for (i = 0; i < n; i++)
	{
		delete[] A[i];
	}
	delete[] A;

	return 0;
}