#include <iostream>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int T;
	cin >> T;
	for (int t = 0; t < T; t++)
	{
		int n;
		cin >> n;
		if ((n + 1) % (n % 100) == 0) {
			cout << "Good\n";
		}
		else {
			cout << "Bye\n";
		}
	}
	return 0;
}