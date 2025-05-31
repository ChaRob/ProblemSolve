#include<iostream>
#include<cmath>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int T;
	cin >> T;
	for (int t = 0; t < T; t++)
	{
		long long a, b;
		cin >> a >> b;
		long long line = ceil((double)a / (double)b);
		cout << line * line << "\n";
	}
	return 0;
}