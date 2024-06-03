#include<iostream>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int T;
	cin >> T;
	for (int t = 1; t <= T; t++)
	{
		int a, b;
		cin >> a >> b;
		cout << "Case " << t << ": " << a + b << "\n";
	}
	return 0;
}