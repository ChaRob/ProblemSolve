#include<iostream>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int n, cnt = 0;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		int sum = 0, target = i;
		while (target > 0)
		{
			sum += target % 10;
			target /= 10;
		}
		if (i % sum == 0) cnt++;
	}
	cout << cnt;
	return 0;
}