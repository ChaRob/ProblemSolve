#include <iostream>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int sum = 0, n;
	while (cin >> n) sum += n;
	cout << sum;
	return 0;
}