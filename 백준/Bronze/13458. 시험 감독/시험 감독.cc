#include <iostream>
using namespace std;

int main()
{
	cin.tie(NULL); ios_base::sync_with_stdio(false);
	int n, b, c, tmp;
	long long res = 0;
	cin >> n;
	int *room = new int[n];
	for (size_t i = 0; i < n; i++)
	{
		cin >> room[i];
	}
	cin >> b >> c;

	for (size_t i = 0; i < n; i++)
	{
		tmp = (room[i] - b >= 0) ? room[i] - b : 0;
		res += 1 + tmp / c + ((tmp % c) ? 1 : 0);
	}

	cout << res;
	delete[] room;
	return 0;
}