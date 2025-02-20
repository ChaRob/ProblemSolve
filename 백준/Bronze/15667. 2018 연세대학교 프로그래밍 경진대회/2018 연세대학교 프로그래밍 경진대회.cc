#include <iostream>
#include <string>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int n;
	cin >> n;
	for (int i = 1; i <= 100; i++)
	{
		if (i * i + i + 1 == n) {
			cout << i;
			break;
		}
	}
	return 0;
}