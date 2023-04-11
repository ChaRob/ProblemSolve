#include <iostream>
using namespace std;
int main()
{
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);
	int T, S;
	cin >> T >> S;
	if (12 <= T && T <= 16 && S == 0) {
		cout << 320;
	}
	else {
		cout << 280;
	}
	return 0;
}