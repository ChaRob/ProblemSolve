#include <iostream>

using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int n, k, cnt = 0;
	cin >> n >> k;
	bool check = true;
	for (int i = 0; i < n; i++)
	{
		char c;
		cin >> c;
		if (c == '0') cnt++;
		else cnt = 0;

		if (cnt == k)
			check = false;
	}
	if (check)
		cout << 1;
	else
		cout << 0;
	return 0;
}