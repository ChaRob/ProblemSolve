#include <iostream>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int n;
	cin >> n;
	bool wheel1 = false, wheel2 = false, wheel3 = false;
	int slot;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin >> slot;
			if (i == 0 && slot == 7) wheel1 = true;
			if (i == 1 && slot == 7) wheel2 = true;
			if (i == 2 && slot == 7) wheel3 = true;
		}
	}
	if (wheel1 && wheel2 && wheel3) cout << 777;
	else cout << 0;
	return 0;
}