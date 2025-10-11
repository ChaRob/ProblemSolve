#include <iostream>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int n, m, a, b;
	cin >> n >> m >> a >> b;
	int needChairs = n * 3 - m, pay = 0;
	if (needChairs > 0) pay = needChairs * a + b;
	cout << pay;
	return 0;
}