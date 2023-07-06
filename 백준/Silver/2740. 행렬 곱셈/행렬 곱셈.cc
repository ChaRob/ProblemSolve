#include<iostream>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int n, m, k, i, j;
	cin >> n >> m;
	int** A = new int *[n];
	for (i = 0; i < n; i++)
	{
		A[i] = new int[m];
	}
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < m; j++)
		{
			cin >> A[i][j];
		}
	}
	cin >> m >> k;
	int** B = new int* [m];
	for (i = 0; i < m; i++)
	{
		B[i] = new int[k];
	}
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < k; j++)
		{
			cin >> B[i][j];
		}
	}

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < k; j++)
		{
			int sum = 0;
			for (int x = 0; x < m; x++)
			{
				sum += A[i][x] * B[x][j];
			}
			cout << sum << " ";
		}
		cout << "\n";
	}

	for (i = 0; i < m; i++)
	{
		delete B[i];
	}
	for (i = 0; i < n; i++)
	{
		delete A[i];
	}
	delete[] A, B;
	return 0;
}