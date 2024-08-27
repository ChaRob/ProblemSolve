#include <iostream>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int n, milk, nextMilk = 0, cnt = 0;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> milk;
		if (nextMilk == milk) {
			cnt++;
			nextMilk++;
			if (nextMilk == 3) nextMilk = 0;
		}
	}
	cout << cnt;
	return 0;
}