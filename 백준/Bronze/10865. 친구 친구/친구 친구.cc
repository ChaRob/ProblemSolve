#include <iostream>
using namespace std;

int students[100001];

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int n, m;
	cin >> n >> m;
	for (int i = 0; i < m; i++)
	{
		int a, b;
		cin >> a >> b;
		students[a]++;
		students[b]++;
	}
	for (int i = 0; i < n; i++)
	{
		cout << students[i + 1] << "\n";
	}
	return 0;
}