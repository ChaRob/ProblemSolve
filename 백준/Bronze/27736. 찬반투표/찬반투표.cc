#include <iostream>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int n;
	cin >> n;
	int app = 0, reject = 0, invalid = 0;
	for (int i = 0; i < n; i++)
	{
		int vote;
		cin >> vote;
		switch (vote)
		{
		case 1:
			app++;
			break;
		case -1:
			reject++;
			break;
		case 0:
			invalid++;
			break;
		default:
			break;
		}
	}
	if (invalid > 0 && invalid >= (float)n / 2)
		cout << "INVALID";
	else if (app > reject)
		cout << "APPROVED";
	else if (app <= reject)
		cout << "REJECTED";
	return 0;
}