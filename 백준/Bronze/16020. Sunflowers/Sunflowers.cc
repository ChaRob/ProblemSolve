#include <iostream>
using namespace std;

void RotateArray(int** arr, int n)
{
	int** temp = new int* [n];
	for (int i = 0; i < n; i++)
		temp[i] = new int[n];
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			temp[j][n - 1 - i] = arr[i][j];
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			arr[i][j] = temp[i][j];
	for (int i = 0; i < n; i++)
		delete[] temp[i];
	delete[] temp;
}

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int n;
	cin >> n;
	int** arr = new int* [n];
	for (int i = 0; i < n; i++)
	{
		arr[i] = new int[n];
		for (int j = 0; j < n; j++)
			cin >> arr[i][j];
	}
	for (int k = 0; k < 4; k++)
	{
		RotateArray(arr, n);
		bool check = true;
		for (int i = 0; i < n; i++)
		{
			if (i != n-1 && arr[i][0] > arr[i + 1][0])
			{
				check = false;
				break;
			}
			for (int j = 0; j < n - 1; j++)
			{
				if (arr[i][j] > arr[i][j + 1])
				{
					check = false;
					break;
				}
			}
			if (!check)
				break;
		}

		if (check)
		{
			for (int i = 0; i < n; i++)
			{
				for (int j = 0; j < n; j++)
					cout << arr[i][j] << ' ';
				cout << '\n';
			}
			break;
		}
	}

	return 0;
}