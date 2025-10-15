#include <iostream>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int n, k, a, b;
	cin >> n >> k >> a >> b;
	cout << (k - 1 + n - 1) * b << " " << (n - 1) * a;
	return 0;
}