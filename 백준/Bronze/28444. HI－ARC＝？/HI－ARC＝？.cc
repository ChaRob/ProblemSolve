#include <iostream>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int h, i, a, r, c;
	cin >> h >> i >> a >> r >> c;
	cout << h * i - a * r * c;
	return 0;
}