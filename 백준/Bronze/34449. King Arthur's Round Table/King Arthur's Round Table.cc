#include <iostream>
using namespace std;

constexpr float pi = 3.14159;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	float d, w;
	int n;
	cin >> d >> w >> n;
	if (pi * d > w * n)
		cout << "YES";
	else
		cout << "NO";
	return 0;
}