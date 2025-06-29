#include <iostream>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int m, k;
	cin >> m >> k;
	if (m % k != 0) cout << "No";
	else cout << "Yes";
	return 0;
}