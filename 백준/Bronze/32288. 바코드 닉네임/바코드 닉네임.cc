#include <iostream>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		char c;
		cin >> c;
		if (c == 'l') cout << 'L';
		else if (c == 'I') cout << 'i';
	}
	return 0;
}