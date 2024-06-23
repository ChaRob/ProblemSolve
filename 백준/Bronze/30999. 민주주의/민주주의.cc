#include<iostream>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int n, m, cnt = 0;
	cin >> n >> m;
	for (int i = 0; i < n; i++)
	{
		int vote[2] = { 0 };
		for (int j = 0; j < m; j++)
		{
			char c;
			cin >> c;
			if (c == 'O') vote[0]++;
			else vote[1]++;
		}
		if (vote[0] > vote[1]) cnt++;
	}
	cout << cnt;
	return 0;
}