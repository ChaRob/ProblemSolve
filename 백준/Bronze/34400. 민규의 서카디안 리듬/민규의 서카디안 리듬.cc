#include <iostream>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int T;
	cin >> T;
	for (int i = 0; i < T; i++)
	{
		int t;
		cin >> t;
		t %= 25;
		if (t >= 17)
			cout << "OFFLINE\n";
		else
			cout << "ONLINE\n";
	}
	return 0;
}