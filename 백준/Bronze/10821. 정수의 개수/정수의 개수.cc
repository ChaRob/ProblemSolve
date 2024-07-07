#include <iostream>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	char c;
	int cnt = 1;
	while (cin >> c) {
		if (c == ',') {
			cnt++;
		}
	}
	cout << cnt;
	return 0;
}