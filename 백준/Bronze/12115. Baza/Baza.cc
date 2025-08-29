#include <iostream>
#include <vector>
using namespace std;

vector<int> database[1001];
int findData[1001];

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int n, m, q;
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		int data;
		for (int j = 0; j < m; j++) {
			cin >> data;
			database[i].push_back(data);
		}
	}
	cin >> q;
	for (int i = 0; i < q; i++)
	{
		for (int j = 1; j <= m; j++)
		{
			cin >> findData[j];
		}
		int count = 0;
		for (int j = 1; j <= n; j++)
		{
			bool isSame = true;
			for (int k = 0; k < m; k++)
			{
				if (findData[k + 1] != -1 && database[j][k] != findData[k + 1])
				{
					isSame = false;
					break;
				}
			}
			if (isSame) count++;
		}
		cout << count << "\n";
	}
	return 0;
}