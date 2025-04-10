#include <iostream>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int k, n, min, max;
	cin >> k >> n;
	min = n + 1;
	max = n * k + 1;
	cout << min << " " << max;
	return 0;
}