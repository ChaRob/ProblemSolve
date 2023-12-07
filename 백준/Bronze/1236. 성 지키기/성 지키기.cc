#include<iostream>
using namespace std;

char castle[51][51];
bool col[50], row[50];

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int n, m;
	cin >> n >> m;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cin >> castle[i][j];
			if (castle[i][j] == 'X') {
				col[i] = true;
				row[j] = true;
			}
		}
	}
	int cnt = 0;
	
	for (int i = 0; i < n; i++)
	{
		if (!col[i]) {
			for (int j = 0; j < m; j++)
			{
				if (!row[j]) {
					col[i] = true;
					row[j] = true;
					cnt++;
					break;
				}
			}
			if (!col[i]) cnt++;
		}
	}

	for (int i = 0; i < m; i++)
	{
		if (!row[i]) {
			for (int j = 0; j < n; j++)
			{
				if (!col[j]) {
					row[i] = true;
					col[j] = true;
					cnt++;
					break;
				}
			}
			if (!row[i]) cnt++;
		}
	}
	cout << cnt;
	return 0;
}