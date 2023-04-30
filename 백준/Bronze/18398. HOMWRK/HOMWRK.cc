#include<iostream>
using namespace std;

int main()
{
	cin.tie(NULL); ios_base::sync_with_stdio(false);
	int T, n;
	cin >> T;
	for (int t = 0; t < T; t++)
	{
		cin >> n;
		for (int idx = 0; idx < n; idx++)
		{
			int a, b;
			cin >> a >> b;
			cout << a + b << " " << a * b << "\n";
		}
	}
	return 0;
}