#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	long long n, m, bags = 0;
	cin >> n >> m;
	double size = n * m;
	cout << ceill(size / 4840 / 5);
	return 0;
}