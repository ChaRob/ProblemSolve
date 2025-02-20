#include <iostream>
#include <string>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int T, low, high;
	string input;
	cin >> T;
	for (int t = 0; t < T; t++)
	{
		cin >> input >> low >> high;
		for (int i = 0; i < input.size(); i++) {
			if (i < low || high <= i) {
				cout << input[i];
			}
		}
		cout << "\n";
	}
	return 0;
}