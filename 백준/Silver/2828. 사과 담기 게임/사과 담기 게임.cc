#include <iostream>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int n, m, j, apple;
	cin >> n >> m >> j;
	int now = 1, sum = 0;
	for (int i = 0; i < j; i++)
	{
		cin >> apple;
		if (now <= apple && now + m - 1 >= apple) {
			continue;
		}
		else if (apple < now) {
			sum += now - apple;
			now = apple;
		}
		else if (now + m - 1 < apple) {
			int loot = apple - (now + m - 1);
			sum += loot;
			now += loot;
		}
	}
	cout << sum;
	return 0;
}