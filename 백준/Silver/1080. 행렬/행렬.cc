#include<iostream>
using namespace std;

char A[51][51], B[51][51];

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int n, m;
	cin >> n >> m;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cin >> A[i][j];
		}
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cin >> B[i][j];
		}
	}

	int cnt = 0;
	bool check = true;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (A[i][j] != B[i][j]) {
				if (i + 3 > n || j + 3 > m) {
					check = false;
					break;
				}
				for (int k = 0; k < 3; k++)
				{
					for (int l = 0; l < 3; l++)
					{
						if (A[i + k][j + l] == '0') A[i + k][j + l] = '1';
						else A[i + k][j + l] = '0';
					}
				}
				cnt++;
			}
		}
		if (!check) break;
	}

	if (!check) cnt = -1;
	cout << cnt;
	return 0;
}