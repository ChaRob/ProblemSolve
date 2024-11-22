#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int k;
	cin >> k;
	string input;
	cin >> input;
	int maxRow = ceil((float)input.size() / (float)k);
	if (maxRow * k > input.size()) {
		for (int i = 0; i < k; i++)
		{
			input = input + '0';
		}
	}
	for (int r = 0; r < k; r++)
	{
		for (int i = 0; i < maxRow; i++)
		{
			if (i % 2 == 0 && input[i * k + r] != '0') {
				cout << input[i * k + r];
			}
			else if (input[i * k + k - (r + 1)] != '0') {
				cout << input[i * k + k - (r + 1)];
			}
		}
	}
	return 0;
}