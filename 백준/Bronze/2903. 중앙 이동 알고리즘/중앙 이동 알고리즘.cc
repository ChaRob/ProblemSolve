#include <iostream>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int n, dot_row = 2;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		dot_row += dot_row - 1;
	}
	cout << dot_row * dot_row;

	return 0;
}