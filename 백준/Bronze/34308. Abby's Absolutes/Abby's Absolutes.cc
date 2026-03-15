#include <iostream>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	int n, k;
	cin >> n >> k;
	for (int i = 0; i < k; i++)
	{
		int apple;
		cin >> apple;
		if (apple - 1 > n - apple)
			cout << n << " ";
		else
			cout << "1 ";
	}
	return 0;
}