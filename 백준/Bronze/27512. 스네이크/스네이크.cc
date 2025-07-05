#include<iostream>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int n, m;
	cin >> n >> m;
	if (n % 2 > 0 && m % 2 > 0) cout << n * m - 1;
	else cout << n * m;
	return 0;
}