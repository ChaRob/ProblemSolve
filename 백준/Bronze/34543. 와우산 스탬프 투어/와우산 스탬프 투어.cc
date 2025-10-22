#include <iostream>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int n, w;
	cin >> n >> w;
	int point = n * 10 + ((n >= 3) ? 20 : 0) + ((n == 5) ? 50 : 0);
	if (w > 1000) point -= 15;
	if (point < 0) point = 0;
	cout << point;
	return 0;
}