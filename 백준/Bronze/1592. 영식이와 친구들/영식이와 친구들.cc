#include <iostream>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int n, m, l, cnt = 0;
	cin >> n >> m >> l;
	int* count = new int[n];
	int i = 0;
	for (int j = 0; j < n; j++)
	{
		count[j] = 0;
	}
	while (true)
	{
		count[i]++;
		if (count[i] >= m) break;

		if (count[i] % 2) {
			i = (i + l) % n;
		}
		else {
			i -= l;
			if (i < 0) i += n;
		}
		cnt++;
	}
	cout << cnt;
	delete[] count;
	return 0;
}