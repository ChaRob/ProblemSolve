#include<iostream>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int X, Y;
		cin >> X >> Y;
		if (X >= Y) {
			cout << "MMM BRAINS\n";
		}
		else {
			cout << "NO BRAINS\n";
		}
	}
	return 0;
}