#include <iostream>
#include <string.h>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int n;
	cin >> n;
	string sus, target;
	for (int i = 0; i < n; i++)
	{
		cin >> target;
		if (target.find('S') != string::npos) {
			sus = target;
		}
	}
	cout << sus;
	return 0;
}