#include<iostream>
#include<string>
using namespace std;

void SwabValue(int& a, int& b) {
	a ^= b;
	b ^= a;
	a ^= b;
}

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int T;
	cin >> T;
	for (int t = 0; t < T; t++)
	{
		int a, b, c;
		string check = "no";
		cin >> a >> b >> c;
		if (b > c) SwabValue(b, c);
		if (a > b) SwabValue(a, b);
		if (b > c) SwabValue(b, c);

		if (a * a + b * b == c * c) {
			check = "yes";
		}
		cout << "Scenario #" << t + 1 <<  ":\n";
		cout << check << "\n\n";
	}
	return 0;
}