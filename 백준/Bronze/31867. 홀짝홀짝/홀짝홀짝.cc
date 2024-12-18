#include <iostream>
#include <string>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int n, tmp, odd = 0, even = 0;
	string k;
	cin >> n >> k;
	for (char c : k) {
		tmp = c - '0';
		if (tmp % 2) odd++;
		else even++;
	}
	if (odd > even) cout << "1";
	else if (odd < even) cout << "0";
	else cout << "-1";
	return 0;
}