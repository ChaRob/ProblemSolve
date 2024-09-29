#include<iostream>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int e, f, c, cnt = 0;
	cin >> e >> f >> c;
	e += f;
	while (e >= c)
	{
		int drink = e / c;
		cnt += drink;
		e = drink + e % c;
	}
	cout << cnt;
	return 0;
}