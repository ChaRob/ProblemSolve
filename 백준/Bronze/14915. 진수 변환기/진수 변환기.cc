#include <iostream>
#include <cmath>
using namespace std;

char bit[16] = { '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F' };

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int m, n;
	cin >> m >> n;
	int maxBit = 0;
	while (m >= pow(n,maxBit + 1)) maxBit++;
	for (int i = maxBit; i >= 0; i--)
	{
		cout << bit[(m / (int)pow(n, i)) % n];
	}
	return 0;
}