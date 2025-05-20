#include <iostream>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int x;
	cin >> x;
	char c[3] = { 'U','O','S' };
	cout << c[(x - 1) % 3];
	return 0;
}